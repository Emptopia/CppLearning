//#include<iostream>
//using namespace std;
//
////++实现自己的整型数据
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//重载++运算符
//	//1、前置++
//	MyInteger& operator++()			//返回引用是为了一直对一个数据进行递增（链式
//	{
//		//先++
//		m_Num++;
//		//再返回
//		return *this;
//	}
//
//
//	//2、后置++
//	//这个int代表占位参数，可以区分前置后置，只能用int
//	MyInteger operator++(int)			//此处不可返回引用，因为运行结束后temp会被释放
//	{
//		//先记录结果
//		MyInteger temp = *this;
//		//后递增
//		m_Num++;
//		//返回记录的结果
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//};
//
////重载<<运算符
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//
//
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//}
//void test02()
//{
//	MyInteger myint2;
//	cout << myint2++ << endl;
//	cout << myint2 << endl;
//
//}
//
//
//
//int main()
//{
//	test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}