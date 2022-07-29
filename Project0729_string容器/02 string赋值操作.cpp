#include<iostream>
using namespace std;

//赋值操作
void test01()
{
	//1
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;
	//2
	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;
	//3
	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;
	//4
	string str4;
	str4.assign("hello C++");
	cout << "str4 = " << str4 << endl;
	//5
	string str5;
	str5.assign("hello C++", 5);				//拿前n个字符赋值
	cout << "str5 = " << str5 << endl;
	//6
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;
	//7
	string str7;
	str7.assign(10, 'w');
	cout << "str7 = " << str7 << endl;





}



int main()
{
	test01();

	system("pause");
	return 0;
}