#include<iostream>
using namespace std;
#include<set>

//查找
void test01()
{
	set<int>s1;
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//find(key)				//查找key是否存在，若存在，返回迭代器，如果不存在，返回set.end()
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "找到元素" << *pos <<endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//count(key)				//统计key的个数，在set中只有0/1
}

//统计
void test02()
{
	set<int>s1;
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	int num = s1.count(30);
	cout << "30的个数为：" << num << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}