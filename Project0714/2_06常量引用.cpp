//#include<iostream>
//using namespace std;
//
//
////常量引用，用以修饰形参，防止误操作
//
//void showValue(const int& val)
//{
//	//val = 1000;			//此时报错，防止实参被修改
//	cout << "val = " << val << endl;
//}
//
//int main()
//{
//
//	//int a = 10;
//	//int& ref = 10;			//引用必须引一块合法的内存空间（栈、堆)
//	//const int& ref = 10;		//加const相当于		int temp =10; int& ref =temp;
//	//ref = 20;					//加入const不可修改
//
//	int a = 100;
//	showValue(a);
//	cout << "a = " << a << endl;
//
//
//	system("pause");
//	return 0;
//}