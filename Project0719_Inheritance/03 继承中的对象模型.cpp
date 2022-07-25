//#include<iostream>
//using namespace std;
//
//
////打开工具	vs20**开发人员命令提示符		查看对象模型
////跳转盘符	d:
////跳转路径	cd D:\c++_project\Project0719_Inheritance
////查看命名	dir
////报告布局	cl/d1 reportSingleClassLayout类名 "***.cpp"
//
////继承中的对象模型
////lass Son       size(16) :
////	+-- -
////	0 | +-- - (base class Base)
////	0      | | m_A
////	4      | | m_B
////	8      | | m_C
////	| +-- -
////	12 | m_D
////	+ -- -
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	//16Byte		父类所有非静态成员属性都会被子类继承下去
//	//					父类中私有成员属性被编译器隐藏，因此访问不到，但是确实被继承下去了
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}