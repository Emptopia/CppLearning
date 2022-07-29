#include<iostream>
using namespace std;

//类模板成员函数在调用时才去创建

class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1 Show" << endl;
	}
};

class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2 Show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	void func1()
	{
		//在未确定T类型，未创建对象时，不会去编译成员函数
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1> m;
	m.func1();
	//m.func2();			//编译时出错，showPerson2不是Person1的成员
}

int main()
{
	test01();

	system("pause");
	return 0;
}
