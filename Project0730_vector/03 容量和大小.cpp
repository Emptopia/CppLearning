#include<iostream>
using namespace std;
#include<vector>

void printArray(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printArray(v1);
	if (v1.empty())
		cout << "v1为空" << endl;
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量：" << v1.capacity() << endl;
		cout << "v1的大小：" << v1.size() << endl;
	}
	//重新指定大小
	v1.resize(15,100);			//利用重载可以指定填充默认值
	printArray(v1);				//如果重新指定的比原来长，默认用0填充新的位置

	v1.resize(5);
	printArray(v1);				//超出会被删除


}



int main()
{
	test01();

	system("pause");
	return 0;
}