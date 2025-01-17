#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//要求两个元素都是有序
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
		v2.push_back(i+1);
	}
	vector<int>vTarget;
	//提前分配内存空间
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;

}


int main()
{
	test01();
	system("pause");
	return 0;
}