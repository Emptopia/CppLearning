#include<iostream>
using namespace std;
#include<set>

//set/multiset ���ڹ���ʽ�������ײ�ṹ�ö�����ʵ��
//set�������ظ�Ԫ�أ�multiset����

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;
	//����insert
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	printSet(s1);

	//set�����ص㣺
	//1������Ԫ�ز���ʱ�Զ�������
	//2��set��������������ظ���ֵ

	//��������
	set<int>s2(s1);
	printSet(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet(s3);


}



int main()
{
	test01();
	system("pause");
	return 0;
}