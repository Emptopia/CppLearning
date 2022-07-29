#include<iostream>
using namespace std;

void test01()
{
	string str = "hello";
	//插入
	str.insert(1, "111");							//在1位置插字符串
	cout << "str = " << str << endl;

	//删除
	str.erase(1, 3);
	cout << "str = " << str << endl;		//在1位置删3个



}



int main()
{
	test01();

	system("pause");
	return 0;
}