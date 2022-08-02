#include<iostream>
using namespace std;
#include<vector>
#include<functional>
#include<algorithm>

//基本不用
//logical_and<T>	逻辑与
//logical_or<T>		逻辑或
//logical_not<T>		逻辑非

void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非		将容器v搬运到v2中，并执行取反

	vector<bool>v2;
	v2.resize(v.size());
	//搬运transform
	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());				//第四个为_Func仿函数
	
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}