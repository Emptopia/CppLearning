//#include<iostream>
//using namespace std;
//
////函数重载
////可以让函数名相同，提高复用性
//
////函数重载满足条件
////1、同一个作用域下
////2、函数名称相同
////3、函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "func 的调用" << endl;
//}
//
//void func(int a)				//个数不同
//{
//	cout << "func(int a) 的调用!" << endl;
//}
//
//void func(double a)			//类型不同
//{
//	cout << "func(double a) 的调用!" << endl;
//}
////函数的返回值int/void 不可作为重载条件
//int main()
//{
//	func();
//	func(10);
//	func(2.3);
//	system("pause");
//	return 0;
//}