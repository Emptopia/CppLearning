//#include<iostream>
//using namespace std;
//
//
////虚析构和纯虚析构特点：
////可以解决父类指针释放子类对象！！
////需要具体函数实现
////写了纯虚析构，则属于抽象类，无法实例化对象
//
////!!!总结!!!
////1、虚析构或纯虚析构就是用来解决父类指针释放子类对象
////2、如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
////3、拥有纯虚析构的函数的类也属于抽象类
////
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal 构造函数调用" << endl;
//	}
//	//利用虚析构可以解决    父类指针释放子类对象			不干净的问题
//	//virtual ~Animal()			//为了执行子类析构
//	//{
//	//	cout << "Animal 析构函数调用" << endl;
//	//}
//	// 
//	//纯虚析构1、声明		还需要在外部实现一下
//	//有了纯虚析构后，也成为抽象类
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void speak() = 0;
//
//};
//
////纯虚析构2、实现	（不可缺少）
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用" << endl;
//}
//
//
//class Cat : public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//
//		m_Name = new string(name);			//开辟堆区第二步
//	}
//	//单单多态不走子类析构
//	//因此要用纯虚析构或虚析构
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat 析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	string* m_Name;		//开辟堆区第一步
//};
//
//void test01()
//{
//	//以下是之前就学到的
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//父类的指针在析构的时候，不会调用子类中的析构函数，如果子类有堆区属性，会导致内存泄漏
//	delete animal;
//}
//
//
//int main()
//{
//	test01();
//
//
//
//
//	system("pause");
//	return 0;
//}