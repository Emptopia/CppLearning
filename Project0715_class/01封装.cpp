//#include<iostream>
//using namespace std;
//
////封装的意义
//	//将属性和行为作为一个整体，表现生活中的事物
//	//将属性和行为加以权限控制
//
////设计一个⚪类，求圆的周长
//class Circle
//{
//	//访问权限：
//	//公共权限
//public:
//	//属性：半径
//	int m_r;
//	double PI = 3.14;
//	//行为：获取周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//实例化，通过一个类创建一个对象的过程
//	Circle c1;
//	//给对象属性赋值
//	c1.m_r = 10;
//	double zc = c1.calculateZC();
//	cout << "周长为：" << zc << endl;
// 	system("pause");
//	return 0;
//}