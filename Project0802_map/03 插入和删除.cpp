#include<iostream>
using namespace std;
#include<map>

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " Value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//插入1
	m.insert(pair<int, int>(1, 10));
	//插入2
	m.insert(make_pair(2, 20));
	//插入3
	m.insert(map<int, int>::value_type(3, 30));
	//插入4
	m[4] = 40;
	//不建议用插入4，因为插错了会新创建一对组
	cout << m[5] << endl;

	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);
	//删除key
	m.erase(3);
	printMap(m);
	//清空
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}


int main()
{
	test01();

	system("pause");
	return 0;
}