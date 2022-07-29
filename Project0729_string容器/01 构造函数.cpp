#include<iostream>
using namespace std;

//string的构造函数
void test01()
{
	string s1;												//默认构造
	const char* str = "Hello world!";
	string s2(str);										//使用const char*字符串初始化
	cout << "s2 = " << s2 << endl;
	string s3(s2);										//拷贝构造
	cout << "s3 = " << s3 << endl;
	string s4(10, 'a');									//n个字符
	cout << "s4 = " << s4 << endl;

}


int main()
{
	test01();

	system("pause");
	return 0;
}