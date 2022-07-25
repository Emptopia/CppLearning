//#include<iostream>
//using namespace std;
//
////多态分为2类
//
////静态多态：函数重载和运算符重载
////动态多态：派生类和虚函数实现运行时多态
//class Animal
//{
//public:
//	//虚函数！
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//
////地址早绑定			在编译阶段确定函数地址
////如果想要猫说话，那么地址要晚绑定，在speak()前		加virtual
//
////动态多态条件：
////1、有继承关系
////2、子类要重写父类的虚函数
//		//重写：函数返回值类型 函数名 参数列表 完全相同
//
////动态多态使用
////		父类的指针或引用指向子类对象
//
//void doSpeak(Animal& animal)		//Animal& animal = cat 父类引用指向子类对象
//{
//	//此时执行父类同名函数
//	animal.speak();
//}
//
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
