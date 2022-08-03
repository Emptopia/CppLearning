#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//binary_search     查找指定元素，找到了返回true，否则false
//无序序列中无法使用，查找效率高
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(2);				//此时无序，结果未知
	bool res = binary_search(v.begin(), v.end(), 9);
	if (res)
	{
		cout << "找到" << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}