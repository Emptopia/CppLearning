#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	//分配了内存，但数据没有初始化
	vector<int> v1;
	//利用reverse预留空间
	v1.reserve(100000);

	int num = 0;   //统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "num = " << num << endl;				//开辟30多次，繁琐

	




}


int main()
{
	test01();
	system("pause");
	return 0;
}