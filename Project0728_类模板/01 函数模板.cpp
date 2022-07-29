#include<iostream>
using namespace std;

//C++另一种编程思想：泛型编程，主要用的技术就是模板
//两种模板机制：函数模板、类模板

//函数模板

//交换两个整形的函数
//普通引用
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//交换两个浮点形的函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}


template<typename T>		//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//1、自动类型推导
	mySwap(a, b);					//传入时将T推导为int
	//2、显示指定类型
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}


int main()
{
	test01();



	system("pause");
	return 0;
}
