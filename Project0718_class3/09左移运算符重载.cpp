//#include<iostream>
//using namespace std;
//
////左移<<运算符
////可以输出自定义的数据类型
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//一般不用成员函数重载左移运算符，因为无法使cout在左边
//	//ostream operator<<(cout){}
//
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<<(ostream& cout, Person p)			//本质 operator<< (cout,p)			简化 cout << p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
//	return cout;				//为了实现链式，后面能跟上endl，要return成cout的类型引用：ostream&
//}
//void test01()
//{
//	Person p(10, 10);
//	cout << p << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}