#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//搬运
//仿函数可以直接return，或者做些处理再搬运
class Transform
{
public:
	int operator()(int v)
	{
		return v+100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;
	vTarget.resize(v.size());				//目标容器要提前开辟空间

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}



int main()
{
	test01();
	system("pause");
	return 0;
}