#include<iostream>
using namespace std;

//普通函数与函数模板的调用规则
//1、如果函数模板和普通函数都可以调用，优先调用普通函数
//2、可以通过空模板参数列表强制调用函数模板
//3、函数模板可以发生函数重载
//4、如果函数模板可以产生更好的匹配，优先调用函数模板

void myPrint(int a,int b)
{
	cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用模板函数" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "调用重载模板函数" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);					//优先调用普通函数

	//通过空模板参数列表，强制调用函数模板
	myPrint<>(a, b);

	//重载调用
	int c = 100;
	myPrint(a, b, c);

	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);			//模板匹配了char，可以优先，普通函数需要隐式转换
}

int main()
{
	test01();


	system("pause");
	return 0;
}
