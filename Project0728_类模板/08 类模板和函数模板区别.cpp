#include<iostream>
using namespace std;


template<class NameType,class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name = " << this->m_Name << " age = " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1、类模板无法自动类型推导
void test01()
{
	//Person p("孙悟空", 1000);					//无法推导
	Person<string, int> p("孙悟空", 1000);
	p.showPerson();
}

//2、类模板在模板参数列表中可以用默认参数
void test02()
{
	Person<string> p("猪八戒", 999);		//类模板才能用默认参数!
	p.showPerson();
}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}
