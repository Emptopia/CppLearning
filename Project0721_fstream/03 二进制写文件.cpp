//#include<iostream>
//#include<fstream>
//using namespace std;
//
////二进制文件    写文件
////二进制文件打开后是乱码哦
//class Person
//{
//public :
//	char m_Name[64];			//char数组，相当于string ，但最好不用string
//	int m_Age;
//};
//
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建流对象
//	ofstream ofs;
//	//ofstream ofs("person.txt", ios::out | ios::binary);	//也可以直接构造，二合一
//	
//	//3、打开文件
//	ofs.open("person.txt", ios::out | ios::binary);			//|按位或，用二进制来写
//	//4、写文件
//	Person p = { "张三", 18 };			//结构体自带的赋值函数
//	ofs.write((const char*)&p, sizeof(Person));					//Person*  强转成 char*   
//
//	//5、关闭文件
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}