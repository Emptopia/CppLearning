#include<iostream>
using namespace std;

void test01()
{
	string str = "abcdef";
	string SubStr = str.substr(1, 3);				//从1位置开始截取3个
	cout << "SubStr = " << SubStr << endl;


}

//实用操作
void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件地址获取用户名信息
	int pos = email.find("@");
	cout << pos << endl;
	string username = email.substr(0, pos);
	cout << username << endl;

}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}