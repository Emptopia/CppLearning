#include<iostream>
using namespace std;
#include<map>

class myCompare			//更改排序规则，写仿函数
{
public:
	bool operator()(int v1, int v2)const
	{
		//降序
		return v1 > v2;
	}
};


void test01()
{
	//查找
	map<int, int, myCompare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " Value = " << it->second << endl;
	}
	cout << endl;




}

int main()
{
	test01();
	system("pause");
	return 0;
}