//#include<iostream>
//using namespace std;
//
////面试经典问题
////浅拷贝：简单的赋值拷贝操作
//
////深拷贝：重新开辟堆区
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age , int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);				//new返回的就是地址哦，
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person& p)				//自己写深拷贝
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;				编译器默认实现的就是这行浅拷贝
//		m_Height = new int(*p.m_Height);			//m_Height时指针，加*解引用，此处为创建新的160数据，注意new数据返回的就是指针！
//	}
//
//	~Person()
//	{
//		//析构代码，可以将堆区开辟的数据释放，如上的new height
//		//无深拷贝时报错，浅拷贝使得堆区的内存重复释放，非法操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;				//删除m_Height指向的堆区内存，main中p1先析构删除，p2析构时报错，非法访问
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;
//	int* m_Height;				//指针，把数据创建到堆区  main中在堆区创建了160，栈区创建了指针m_height
//};
//
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;
//	Person p2(p1);				//拷贝
//	cout << "p2的年龄为：" << p2.m_Age << " 身高为：" << *p2.m_Height << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}