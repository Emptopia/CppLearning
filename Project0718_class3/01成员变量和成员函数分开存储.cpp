//#include<iostream>
//using namespace std;
//
//class Person
//{
//	int m_A;					//成员变量				属于类对象
//	int static m_B;			//静态成员变量			不属于类对象上
//	void func() {}			//非静态成员函数		不属于类对象上
//	static void func2() {}//静态成员函数			不属于类对象上
//};
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间：1字节
//	//C++会给每个空对象分配1字节空间，为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;						
//}
//
//void test02()
//{
//	Person p;
//	//按int分配，分配了m_A的4个字节
//	
//	cout << "size of p = " << sizeof(p) << endl;
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}