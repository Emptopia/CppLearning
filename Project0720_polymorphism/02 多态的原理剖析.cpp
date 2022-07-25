//#include<iostream>
//using namespace std;
//
//
//
//class Animal
//{
//public:
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
//
//void doSpeak(Animal& animal)		//多态发生~~~
//{
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
//void test02()
//{
//	//无virtual函数时，空类占1字节
//	//有virtual函数时，多了一个指针		4字节(32)		8字节(64)
//
//	//Animal中
//	//vfptr			virtual function pointer	虚函数指针
//	//vftabel		virtual function table		虚函数表
//	//vfptr指向vftable，表内部记录虚函数的地址		&Animal::speak
//
//	//Cat中
//	//vfptr指向vftable，表内部记录虚函数的地址		&Animal::speak（未重写时）
//	//当子类中重写了虚函数，子类的虚函数表会替换成子类的虚函数地址	&Cat::speak（未重写时）
//	//当父类的指针或者引用指向子类对象时，发生多态		即：Animal& animal = cat;时
//
//
//	cout << "sizeof Animal = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
