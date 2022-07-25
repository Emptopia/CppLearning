//#include<iostream>
//using namespace std;
//
////语法：class 子类 : 继承方式 父类1 , 继承方式 父类2 ...
////多继承可能会导致多个重名成员出现，要加作用域区分，实际不常用
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_B = 100;
//		m_A = 200;
//	}
//	int m_B;
//	int m_A;
//
//};
//
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << "sizeof Son = " << sizeof(s) << endl;
//	//当父类出现同名成员，要加作用域区分
//	//cout << "m_A = " << s.m_A << endl;				//二义性	报错
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}