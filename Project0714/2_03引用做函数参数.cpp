//#include<iostream>
//using namespace std;
//
////交换函数方法
////1、值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2、地址传递		//指针
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////3、引用传递		//引用
//void mySwap03(int& a, int& b)				//改别名，相当于改同一个地址。和地址传递是同样的效果
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	mySwap01(a,b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;			//未改变
//	mySwap02(&a, &b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;			//改变
//	mySwap03(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;			//改变
//
//
//
//
//	system("pause");
//	return 0;
//}