//#include<iostream>
//using namespace std;
//
////this指针指向  被调用的  成员函数的对象	
////this指针是隐含每一个非静态成员函数内的指针
////this不需要定义，直接使用即可
//
////1、解决名称冲突
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//	Person& PersonAddAge(Person& p)			//如果此处开头不用Person&，那么一次调用后返回的将是一个值传递新的Person，无法链式
//	{
//		this->age += p.age;
//		//this指向p2的指针，*this就是p2本体
//		return *this;		
//	}
//	int age;			//也可以注意命名规范
//};
//
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
////2、返回对象本身*this
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}