//#include<iostream>
//using namespace std;
//
////继承中的构造和析构的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的析构函数" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		cout << "Son的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数" << endl;
//	}
//
//};
//
//void test01()
//{
//	Son s;
//
//	//父类构造 ->子类构造		先有父亲后有儿子
//	//子类析构 ->父类析构		白发人送黑发人
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}