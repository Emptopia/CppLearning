#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>
//向容器内填充
void myPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.resize(10);
	//后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}