//#include<iostream>
//using namespace std;

////全局变量
//int g_a = 10;
//int g_b = 10;
//
//const int cg_a = 10;
//const int cg_b = 10;

//int main()
//{

	//全局区
	//全局变量、静态变量、常量
	//创建普通局部变量
	//int a = 10;
	//int b = 10;
	//cout << "局部变量a地址：" << (int)&a << endl;							//局部区
	//cout << "局部变量b地址：" << (int)&b << endl;
	//cout << "全局变量g_a地址：" << (int)&g_a << endl;					//全局区
	//cout << "全局变量g_b地址：" << (int)&g_b << endl;
	////静态变量	在普通变量前加static，属于静态变量
	//static int s_a = 10;
	//static int s_b = 10;
	//cout << "静态变量s_a地址：" << (int)&s_a << endl;				//全局区				//static不分全局局部
	//cout << "静态变量s_b地址：" << (int)&s_b << endl;
	////常量
	////字符串常量
	//cout << "字符串常量的地址为：" << (int)&"一串字符串" << endl;			//全局区
	////const修饰的变量
	////const修饰的全局变量
	//cout << "全局常量cg_a的地址为：" << (int)&cg_a << endl;			//全局区
	//cout << "全局常量cg_b的地址为：" << (int)&cg_b << endl;			
	////const修饰的局部变量
	//const int c_l_a = 10;
	//const int c_l_b = 10;
	//cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;			//局部区！！！(特殊)
	//cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;			




//	system("pause");
//	return 0;
//}