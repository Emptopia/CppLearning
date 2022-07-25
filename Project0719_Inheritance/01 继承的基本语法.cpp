//#include<iostream>
//using namespace std;
//
////继承的好处：减少重复代码
//
////语法：class 子类 ： 继承方式 父类
////子类	派生类
////父类	基类	
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册……公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……公共底部" << endl;
//	}
//	void lefter()
//	{
//		cout << "Java、Python、C++……公共分类列表" << endl;
//	}
//	void BaseShow()
//	{
//		header();
//		footer();
//		lefter();
//
//	}
//};
//
//
////java页面
//class Java :public BasePage
//{
//public:
//	
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//	void show()
//	{
//		cout << "Java下载视频如下" << endl;
//		content();
//		BaseShow();
//	}
//};
//
//void test01()
//{
//	Java ja;
//	ja.show();
//
//}
//
//
//int main()
//{
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}