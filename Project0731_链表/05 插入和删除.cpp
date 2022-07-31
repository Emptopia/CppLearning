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
	//Î²²åpush_back
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//Í·²åpush_front
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);
	printList(L);

	//Î²É¾pop_back
	L.pop_back();
	//Í·É¾pop_front
	L.pop_front();
	printList(L);

	//²åÈëinsert
	list<int>::iterator it = L.begin();
	it++;
	L.insert(it, 114514);
	printList(L);

	//É¾³ýerase
	it = L.begin();
	L.erase(++it);
	printList(L);

	//ÒÆ³ýremove
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//Çå¿Õclear
	L.clear();
	printList(L);

}

int main()
{
	test01();

	system("pause");
	return 0;
}