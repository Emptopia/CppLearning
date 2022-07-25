//#include<iostream>
//using namespace std;
//
////又称仿函数，常见stl
//
//class MyPrint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//class MyAdd
//{
//public:
//	int operator()(int num1, int num2)				//仿函数没有固定写法，很灵活
//	{
//		return num1 + num2;
//	}
//};
//
//void MyPrint02(string test)				//正常打印函数
//{
//	cout << test << endl;
//}
//
//void test01()
//{
//	MyPrint myPrint;
//	myPrint("Hello world!");			//仿函数，把类当成函数名使用
//	MyPrint02("Hello world!");
//}
//
//void test02()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << ret << endl;
//
//	//匿名函数对象					不创建对象直接用类的函数
//	cout << MyAdd()(100,100) << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}