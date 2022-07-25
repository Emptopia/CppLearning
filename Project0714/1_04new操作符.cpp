//#include<iostream>
//using namespace std;
//
////1、new的基本语法
//int* func()
//{
//	//在堆区创建整型数据
//	//new返回的是该数据类型的指针
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	//堆区的数据由程序员管理开辟和释放
//	int* p = func();
//	cout << *p << endl;
//	//释放
//	delete p;
//	//cout << *p << endl;			//非法访问权限，p指向内存已释放，此时p指向的空间是不确定的
//}
//
////2、在堆区利用new开辟数组
//void test02()
//{
//	//创建10整型数据的数组
//	int* arr = new int[10];			//[10]代表数组有10个元素，返回首地址
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	delete[] arr;						//释放数组时要加[]
//	//for (int i = 0; i < 10; i++)			//非法访问
//	//{
//	//	cout << arr[i] << endl;
//	//}
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}