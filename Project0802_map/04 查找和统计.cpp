#include<iostream>
using namespace std;
#include<map>

void test01()
{
	//查找
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "找到了key = " << pos->first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	//统计
	int num = m.count(3);
	cout << "num = " << num << endl;			//map不允许重复key，故count只有0/1




}

int main()
{
	test01();
	system("pause");
	return 0;
}