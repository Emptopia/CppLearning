#include<iostream>
using namespace std;
#include<map>

//map中所有元素都是pair
//第一个元素：key，键值，起到索引作用。
//第二个元素：value，实值
//所有元素会按照key排序

//multimap允许重复key，map不允许

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
	//默认构造
	map<int, int>m;
	m.insert(pair<int, int>(1,10));				//此为匿名对组
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	//拷贝构造
	map<int, int>m2(m);
	printMap(m2);

	//赋值
	map<int, int>m3;
	m3 = m2;
	printMap(m3);
}


int main()
{
	test01();


	system("pause");
	return 0;
}
