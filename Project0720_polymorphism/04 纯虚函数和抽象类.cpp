//#include<iostream>
//using namespace std;
//
////语法 virtual 返回值类型 函数名 (参数列表) =0;
//
////只要有一个纯虚函数，这个类称为抽象类
////抽象类特点：
////1、无法实例化对象
////2、抽象类的子类	必须重写纯虚函数		否则也属于抽象类
//class Base
//{
//public:
//	
//	virtual void func() = 0;			//纯虚哦
//};
//class Son : public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func函数调用" << endl;
//	}
//
//};
//
//void test01()
//{
//	//Base b;					//抽象类无法实例化对象（栈）
//	//new Base;				//抽象类无法实例化对象（堆	）
//	Son s;
//	Base* base = new Son;			//多态		通过一个父类指针，由于对象不同，调用多种函数
//	base->func();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
