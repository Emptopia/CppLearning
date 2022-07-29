#include<iostream>
using namespace std;

//读
void test01()
{
	string str = "hello";

	//cout << "str = " << str << endl;
	//1、通过[]访问
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//2、通过at访问
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
}

//写
void test02()
{
	string str = "hello";
	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'x';
	cout << "str = " << str << endl;

}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}