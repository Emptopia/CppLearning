#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//求两个容器的交集
void myPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);					//0~9
		v2.push_back(i + 5);				//5~14
	}
	vector<int>vTarget;
	//特殊情况的最大size
	vTarget.resize(min(v1.size(), v2.size()));
	//获取交集
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	//itEnd返回非0的最后一个位置
	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}