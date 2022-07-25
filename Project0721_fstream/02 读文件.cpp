//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
////文本文件	读文件
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建流对象
//	ifstream ifs;					//输入流，读取
//
//	//3、打开文件，是否打开成功
//	ifs.open("text.txt", ios::in);				//ios::in  读
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败！" << endl;
//		return;
//	}
//
//	//4、读数据
//
//	//方法一
//	//char buf[1024] = { 0 };				//定义了一个大小为1024的char数组，并将所有元素赋值为0。
//	//while (ifs >> buf)						//读到头了就返回false，while循环中断
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//方法二
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))				//getline(要读数组的首地址,要读的字节数)
//	//{
//	//	cout << buf << endl;
//	//}
//	
//	//方法三
//	//string buf;										//好用
//	//while (getline(ifs, buf))					//getline(输入流对象，用来放的字符串）		要用string头文件哦‘
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//方法四
//	char c;
//	while ((c = ifs.get()) != EOF)			//一个一个字符读，没有读到end of file，则一直读
//	{
//		cout << c;									//效率低，不常用
//	}
//
//	//5、关闭文件
//	ifs.close();
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