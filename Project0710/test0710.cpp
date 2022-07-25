/*
#include<iostream>
using namespace std;

int main()
{
*/

	//指针
	/*int a = 10;
	//指针定义语法：数据类型* 变量名
	int* p; 
	//指针变量赋值
	p = &a;   
	cout << &a << endl;
	cout << p << endl;								//p只保存变量地址

	//指针的使用
	//通过*指向变量的内存
	*p = 1000;											//改变*p，改变的是变量的内存
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;*/
	//指针所占内存空间
	/*int a = 10;
	int* p = &a;			
	int b = sizeof(p);
	cout << b << endl;		//指针在32位占4个字节，64位占8个字节
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;*/
	//空指针
	/*int* p = NULL;				//指针变量初始化
	cout << *p << endl;		//0~255之间的内存编号是系统占用的，故空指针无法访问*/
	//野指针
	/*int* p = (int*)0x1100;		//指向非法内存空间	
	cout << *p << endl;			//访问野指针报错  (你指向的这个地址不属于当前进程的空间，越界异常
	*/
	//const修饰指针
	/*
	int a = 10;
	int b = 10;
	const int* p1 = &a;		//1、常量指针(const跟*，限定*，即解址值)			(常量指向值)
	p1 = &b;						//指针指向可改
	//*p1 = 20;					//指针指向的值不可改

	int* const p2 = &a;		//2、指针常量(const跟p2，限定p2，即指向)		(常量指向)
	//p2 = &a;					//指针指向不可改
	*p2 = 20;						//指针指向的值可改

	const int* const p3 = &a;			//3、即修饰指针，又修饰常量
	//p3 = &b;								//指针指向不可改
	//*p3 = 20;								//指针指向的值不可改

	system("pause");
	return 0;
}
*/