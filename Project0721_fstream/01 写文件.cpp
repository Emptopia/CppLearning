//#include<iostream>
//#include<fstream>
//using namespace std;
//
////文本文件：以文本的ASCII码存储到计算机中
////二进制文件：以文本的二进制形式存储在计算机中，用户一般不能直接读懂
//
////文件流三大类
////1、ofstream：写操作
////2、ifstream：读操作
////3、fstream：读写操作
////
//
////文本文件：写文件
//void test01()
//{
//	//1、包含头文件fstream
//
//	//2、创建流对象
//	ofstream ofs;			//output，输出，写文件
//
//	//3、指定打开方式
//	ofs.open("text.txt", ios::out);				//open(文件路径，打开方式)			ios::out(写内容)
//
//	//4、写文件
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	//5、关闭文件
//	ofs.close();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}