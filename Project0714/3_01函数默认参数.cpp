//#include<iostream>
//using namespace std;
//
////函数默认参数
////如果我们自己传入数据，就用自己的参数，如果没有，那么用默认值
////注意：
//	//1、如果某个位置已经有了默认参数，则该位置往后都必须有默认值
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//	//2、函数声明，函数实现		二者只能一个有默认参数
//
//int func2(int a = 10, int b = 10);	
//
//int func2(int a = 10, int  b = 10)				//报错，参数重定义
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << func(10) << endl;
//	//cout << func2(10, 10) << endl;		//报错，参数重定义
//	system("pause");
//	return 0;
//}