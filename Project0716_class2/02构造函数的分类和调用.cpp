//#include<iostream>
//using namespace std;
//
////构造函数的分类
//class Person
//{
//public:
//	//构造函数的分类			无参（默认）、有参、拷贝构造函数
//	Person()
//	{
//		cout << "Person无参构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person有参构造函数调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int age;
//};
//
////构造函数的调用
//void test01()
//{
//	//1、括号法					老师常用
//	//Person p1;				//默认构造函数的调用
//	//Person p2(10);
//	//Person p3(p2);
//	//注意事项
//	// 调用默认构造函数时，不要加()
//	// 因为这行代码编译器会认为是函数声明，返回值为Person，不会认为是在创建对象
//	// Person p1();
//
//	//cout << "p2的年龄是：" << p2.age << endl;
//	//cout << "p3的年龄是：" << p3.age << endl;
//
//	//2、显示法
//	Person p1;								//无参构造
//	Person p2 = Person(10);			//有参构造
//	Person p3 = Person(p2);			//拷贝构造
//	//Person(10);			//匿名对象    特点：当前!行!执行完毕后，系统会立即回收
//
//	//注意事项2
//	//不要利用拷贝构造函数  初始化匿名对象
//	//Person(p3);			//报错，重定义，编译器会认为  Person(p3) = Person p3;
//
//
//	//3、隐式转换法
//	Person p4 = 10;			//相当于写了    Person p4 = Person(10);
//	Person p5 = p4;			//拷贝构造
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}