//#include<iostream>
//using namespace std;
//
////c++编译器至少给一个类添加4个函数
////1、默认构造函数
////2、默认析构函数
////3、默认拷贝构造函数，对属性进行拷贝
////4、赋值运算符 operator=，对属性进行拷贝
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;				//p2执行析构时，堆区内存重复释放，程序崩溃
//		}
//	}
//	Person& operator=(Person& p)
//	{
//		//编译器浅拷贝
//		//m_Age = p.m_Age;
//		//深拷贝
//
//		//先判断是否有属性在堆区，如果有先释放干净，然后深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);			//此处为			指针 = new int （解引用的int）	new返回的就是指针
//
//		//返回自身		链式
//		return *this;
//	}
//
//
//	int* m_Age;				//自带的等号赋值是浅拷贝，p1,p2用的都是同一个指针
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//
//
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//
//}
//
//int main()
//{
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}