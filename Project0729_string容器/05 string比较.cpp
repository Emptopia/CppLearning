#include<iostream>
using namespace std;

void test01()
{
	string str1 = "aello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "st1 = str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "st1 > str2" << endl;
	}
	else
	{
		cout << "st1 < str2" << endl;
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}