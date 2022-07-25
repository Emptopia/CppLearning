//#include<iostream>
//using namespace std;
//
//int* func()
//{
//	//利用new关键字 可以将数据开辟到堆区
//	//指针本质也是局部变量，在栈区，而指针保存的数据是放在堆区
//	int* p = new int(10);
//	return p;
//}
//
//int main()
//{
//	int* p = func();			//func中的指针p释放前传递给了main的指针p
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}