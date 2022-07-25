#include<iostream>
using namespace std;

//注意事项
//1、引用作为重载的条件
void func(int &a)					//func(10);相当于   int& a =10; 不合法
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a)		//相当于const int& a =10;    临时空间，合法代码
{
	cout << "func(const int &a)调用" << endl;
}

//2、函数重载作为默认参数
void func2(int a, int b =10)
{
	cout << "func2(int a, int b)调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)调用" << endl;
}

int main()
{
	int a = 10;
	//func(a);			//调用第一个版本
	//func(10);		//调用第二个版本
	//func2(10);		//当函数重载遇到默认参数，会出现二义性


	system("pause");
	return 0;
}