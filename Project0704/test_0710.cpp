/*
#include<iostream>
using namespace std;
//函数调用
int add(int num1, int num2)
{
	int num = num1 + num2;
	return num;
}
//值传递
void swap(int num1, int num2)
{
	cout << "换位前" << num1 << num2 << endl;
	int temp = num2;
	num2 = num1;
	num1 = temp;
	cout << "换位后" << num1 << num2 << endl;
}
//函数常见样式（无参无返，有无，无有，又有）
void test01()
{
	cout << "test01执行" << endl;
}
void test02(int a)
{
	cout << "test02执行，a=" << a << endl;
}
int test03()
{
	cout << "test03执行" << endl;
	return 1000;
}
int test04(int a)
{
	cout << "test04执行 " << endl;
	return a;
}
//函数声明
int max(int a, int b);				//函数在main后时，提前告诉代码存在，但vs2019之后都不需要了



int main()
{
*/
	//函数调用
	/*
	int a = 100;
	int b = 500;
	int c = add(a, b);
	cout << c << endl;*/
	//值传递
	/*
	int a = 5;
	int b = 4;
	swap(a, b);
	cout << "换位后" << a << b << endl;		//做值传递时，函数的形参发生改变，并不会改变实参
	*/
	//函数常见样式
	/*test01();
	test02(5);
	int num1 =test03();
	cout << "num1=" << num1 << endl;
	int num2 = test04(10000);
	cout << "num2=" << num2 << endl;*/
	//函数声明
	/*int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	*/
/*
	system("pause");
	return 0;
}


int max(int a, int b)
{
	return a > b ? a : b;
}
*/