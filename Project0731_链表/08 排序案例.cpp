#include<iostream>
using namespace std;
#include<list>

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

void printList(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
	}
}

//排序
bool comparePerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		//年龄相同按身高排列			按身高降序
		return p1.m_Height > p2.m_Height;
	}

	//按年龄升序
	return p1.m_Age < p2.m_Age;
}

void test01()
{
	list<Person>L;
	Person p1("a", 35, 175);
	Person p2("b", 45, 180);
	Person p3("c", 40, 170);
	Person p4("d", 25, 190);
	Person p5("e", 35, 160);
	Person p6("f", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	printList(L);

	//排序
	cout << "------------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(comparePerson);
	printList(L);
}

int main()
{
	test01();
	system("pause");
	return 0;
}