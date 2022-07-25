//#include<iostream>
//using namespace std;
//
////三种使用情况
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//
//
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//
//	}
//	int m_Age;
//};
////1、使用一个已经创建完毕的对象来初始化一个!新对象!
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);					//方法1
//}
//
////2、值传递的方式给函数参数传值
//void doWork(Person p)		//方法2，值传递，拷贝构造了!形参!
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3、以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;					//!返回!给外边，即拷贝
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;			//p1和p不是一个地址！
//
//}
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