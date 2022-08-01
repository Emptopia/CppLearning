#include<iostream>
using namespace std;
#include<set>

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class myCompare
{
public:
	bool operator()(int v1, int v2)const			//���Ѽӵ�const�����򱨴�
	{
		//����
		return v1 > v2;
	}
};

//���÷º������ı��������
void test01()
{
	//1��set���������������
	set<int>s1;
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(50);
	s1.insert(10);
	
	printSet(s1);

	//ָ���������Ϊ�Ӵ�С
	set<int,myCompare>s2;

	s2.insert(30);
	s2.insert(20);
	s2.insert(40);
	s2.insert(50);
	s2.insert(10);
	for (set<int, myCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}