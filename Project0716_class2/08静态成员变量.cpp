//#include<iostream>
//using namespace std;
//
////静态成员就是在成员变量或成员函数前加static
//
//
//
//class Person
//{
//public:
//	//静态成员变量
//	//1、所有对象共享同一份数据
//	//2、在编译阶段分配内存				全局区，程序执行前
//	//3、类内声明，类外初始化			
//	static int m_A;						//类内声明
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;			//	类外初始化
//int Person::m_A = 200;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;		//公有，一起修改
//
//}
//
//void test02()
//{
//	//静态成员所有对象共享，不属于某个对象
//
//	//1、通过对象访问
//	Person p;
//	cout << p.m_A << endl;
//
//	//2、通过类名访问
//	cout << Person::m_A << endl;
//
//	//类外访问不到私有的成员
//	//cout << Person::m_B << endl;			
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}