//#include<iostream>
//using namespace std;
//
////引用做函数的返回值
//
//int& test01()
//{
//	int a = 10;	//局部变量存放在四区中的栈区
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;	//静态变量在全局区，程序结束后系统释放
//	return a;
//}
//
//
//
//int main()
//{
//	//1、不要返回局部变量引用
//	int& ref = test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;			//保存一次后失去，a的内存已经被释放
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;		//结果正确
//
//	//2、函数的调用可以作为左值
//	test02() = 1000;										//相当于a=1000
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;		//ref2=1000
//
//
//	system("pause");
//	return 0;
//}