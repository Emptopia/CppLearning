//#include<iostream>
//using namespace std;
//
////默认情况，函数体给一个类添加三个函数
////默认构造函数、默认析构函数、默认拷贝构造函数
//
////写了有参，则没有默认构造函数
////写了拷贝，则没有其他默认构造函数
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person默认构造函数调用" << endl;
//	//}
//	//Person(int Age)
//	//{
//	//	m_Age = Age;
//	//	cout << "Person有参构造函数调用" << endl;
//	//}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	//Person p;
//	//p.m_Age = 18;
//	//Person p2(p);
//	//cout << "p2的年龄为：" << p2.m_Age << endl;			//默认的拷贝构造函数就提供了 值的传递
//}
//
//void test02()
//{
//	//Person p;					//只写有参构造函数时，报错，Person不存在默认构造函数
//}
//
//void test03()
//{
//	//Person p;
//	//Person p(10);			//只写拷贝构造函数时，报错，不存在有参无参的默认构造函数
//}
//
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}