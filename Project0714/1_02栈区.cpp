//#include<iostream>
//using namespace std;

//栈区注意事项：不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

//int* func(int b)			//形参数据，也放在栈区
//{
//	int a = 10;			//局部变量，存放在栈区，栈区的数据在函数执行完后自动释放
//	return &a;			//返回局部变量的地址
//}
//
//int main()
//{
//	//接收func函数返回值
//	int* p = func(5);
//	cout << *p << endl;			//编译器自动保留了该数据，x86保留一次，x64一直保留
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}