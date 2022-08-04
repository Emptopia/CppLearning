#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//差集
//v1差v2：v1中不是交集的部分
//v2差v1：v2中不是交集的部分
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
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vTarget;
	//无交集时，取最大值
	vTarget.resize(max(v1.size(), v2.size()));
	cout << "v1和v2的差集" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

	cout << "v2和v1的差集" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;
}