#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	//1���ȺŸ�ֵ
	vector<int>v2;
	v2 = v1;
	printVector(v2);

	//2��assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());				//ȡ			[begin,end)
	printVector(v3);

	//3��assign   n��elem
	vector<int>v4;
	v4.assign(10, 100);
	printVector(v4);
}



int main()
{
	test01();


	system("pause");
	return 0;
}