#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
//ͳ��Ԫ�س��ָ���
//ͳ��������������
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);
	cout << "40������" << num << endl;
}
//ͳ���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	bool operator==(const Person& p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};
void test02()
{
	vector<Person>v;
	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 20);
	Person p4("d", 20);
	Person p5("e", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("xxx", 20);
	

	int num = count(v.begin(), v.end(), p);
	cout << "��xxxͬ������������" << num << endl;
}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}