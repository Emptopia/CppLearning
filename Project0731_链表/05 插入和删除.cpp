#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L;
	//β��push_back
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//ͷ��push_front
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);
	printList(L);

	//βɾpop_back
	L.pop_back();
	//ͷɾpop_front
	L.pop_front();
	printList(L);

	//����insert
	list<int>::iterator it = L.begin();
	it++;
	L.insert(it, 114514);
	printList(L);

	//ɾ��erase
	it = L.begin();
	L.erase(++it);
	printList(L);

	//�Ƴ�remove
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//���clear
	L.clear();
	printList(L);

}

int main()
{
	test01();

	system("pause");
	return 0;
}