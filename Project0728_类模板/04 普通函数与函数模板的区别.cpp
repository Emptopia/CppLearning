#include<iostream>
using namespace std;

//1、普通函数调用						 可以		发生隐式类型转换
//2、函数模板  用  自动类型推导，不可以	发生隐式类型转换
//3、函数模板  用  显示指定类型，可以		发生隐式类型转换

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';				//a - 97		c - 99				
	cout << myAdd01(a, c) << endl;			//10+99=109

	//1、自动类型推导
	//cout << myAdd02(a, c) << endl;			//无法推导出一致数据类型，无法隐式转换
	
	//2、显示指定类型
	cout << myAdd02<int>(a, c) << endl;	//发生隐式类型转换
}


int main()
{
	test01();
	system("pause");
	return 0;
}
