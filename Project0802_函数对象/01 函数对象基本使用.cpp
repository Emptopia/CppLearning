#include<iostream>
using namespace std;

//概念：
		//重载函数调用操作符的类，其对象常称为函数对象
		//函数对象使用重载的()时，行为类似函数调用，也叫仿函数
//本质：
		//函数对象(仿函数)是一个类，不是一个函数

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};


//函数对象使用：
//1、函数对象在使用时，可以像普通函数那样调用，可以有参数、返回值
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

//2、函数对象超出普通函数的概念，可以拥有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;			//内部自己的状态
};

void test02()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint 调用次数：" << myPrint.count << endl;
}

//3、函数对象可以作为参数传递
void doPrint(MyPrint& mp, string test)
{
	mp(test);
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}