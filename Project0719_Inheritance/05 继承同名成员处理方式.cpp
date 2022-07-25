//#include<iostream>
//using namespace std;
//
////继承中同名成员处理
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base 下的函数调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base 下的函数调用" << endl;
//
//	}
//	int m_A;
//};
//class Son: public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son 下的函数调用" << endl;
//	}
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;				//同名的访问，结果为200，子类数据
//	cout << "Base 下 m_A = " << s. Base::m_A << endl;		//要通过子类对象访问父类同名成员，要加作用域
//	s.func();
//	s.Base::func();				//成员函数同成员变量
//
//	//如果子类中出现父类的同名成员函数，父类的所有同名重载的成员函数都被隐藏
//	//s.func(10);
//	s.Base::func(10);
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}