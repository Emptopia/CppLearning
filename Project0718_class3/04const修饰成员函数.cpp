//#include<iostream>
//using namespace std;
//
////常函数
//class Person
//{
//public:
//	void showPerson() const
//	{
//		//this指针的本质是一个指针常量，指针指向不可修改
//		//函数后加const，变为常函数，不可修改指向值 
//		
//		//this -> m_A = 100;			//const不可修改指向值
//		//this->NULL;						//指向不可修改
//		m_B = 100;							//mutable成员可在常函数中修改
//		this->m_B = 100;					//同义
//	}
//	void func() 
//	{
//		m_A = 500;
//	}
//	int m_A;
//	mutable int m_B;
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//
////常对象
//void test01()
//{
//	const Person p;
//	//p.m_A = 100;			//常对象不可修改普通成员变量
//	p.m_B = 200;				//mutable成员可以修改
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();						//不可调用，因为普通成员函数可以修改普通成员变量
//}
//
//
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