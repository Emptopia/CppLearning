#include<iostream>
using namespace std;
//1、查找
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");								//找不到则返回-1
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串" << endl;
		cout << "pos = " << pos << endl;				//返回3
	}
	
	pos = str1.rfind("de");										//返回7，从右往左查
	cout << "pos = " << pos << endl;				
}

void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");			//从1位置开始去除3个加入指定字符串
	cout << str1 << endl;
}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}