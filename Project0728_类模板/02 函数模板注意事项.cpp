#include<iostream>
using namespace std;

//函数模板注意事项
template<typename  T>			//typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1、自动类型推导，必须要推导出一致的数据类型T才能使用
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);
	//mySwap(a, c);		出错，推导不出一致的T
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

}

//2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func调用" << endl;
}

void test02()
{
	//func();				出错，推导不出T
	func<int>();
}



int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
