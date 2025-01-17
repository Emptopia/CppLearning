#include<iostream>
using namespace std;
#include<vector>


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}


	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;			//此处的*it为Person，要解引用或箭头
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;

	}
}

//存放自定义数据类型的		指针!
void test02()
{
	vector<Person*>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器中的数据
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "::姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;			//此处的*it为Person*,要再解一次

	}



}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}