#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//查找相邻		adjacent

void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());			//返回的应该是第一个相同的元素
	if (pos == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到：" << *pos << endl;
	}
	while (pos != v.end())
	{
		pos++;
		cout << "++一次" << endl;
	}



}

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()			//自己测试
{
	vector<int>v = { 1,1,2,3,3 };
	vector<int>::iterator it;
	vector<int>::iterator it2;
	it = adjacent_find(v.begin(), v.end());
	//it2 = (it++);
	it = v.erase(it);						//删除后，返回的是被删除的下一个位置的迭代器
	v.erase(it);								//即可连删
	printVector(v);
	it = adjacent_find(v.begin(), v.end());
	//it2 = (it++);
	it = v.erase(it);
	v.erase(it);
	printVector(v);
	it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
		cout << "好" << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}