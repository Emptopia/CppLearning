//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//
//
//};
//
//class Son :public Base
//{
//public:
//
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//
//
//	static int m_A;
//};
//
//int Base::m_A = 100;
//int Son::m_A = 200;
//
//void test01()
//{
//	//1、通过对象访问数据
//	Son s;
//	cout << "Son - m_A = " << s.m_A << endl;
//	cout << "Base - m_A = " << s.Base::m_A << endl;
//	//2、通过类名访问数据
//	cout << "Son - m_A = " << Son::m_A << endl;
//	cout << "Base - m_A = " << Base::m_A << endl;
//	cout << "Base - m_A = " << Son::Base::m_A << endl;
//
//}
//
//void test02()
//{
//	//1、通过对象访问
//	Son s;
//	s.func();
//	s.Base::func();
//	//2、通过类名访问
//	Son::func();
//	Base::func();
//	Son::Base::func();
//	
//	//Son::func(100);				//父类所有同名重载被隐藏
//	Base::func(100);
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}