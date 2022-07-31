#include<iostream>
using namespace std;
#include<list>

void test01()
{
	//数据存取
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//不支持   at   []    随机访问				list本质链表，不是用连续线性空间存储数据，迭代器是不支持随机访问的，只能让迭代器++++++
	//L1[0]
	//L1.at(0)

	cout << "第一个元素：" << L1.front() << endl;
	cout << "最后一个元素：" << L1.back() << endl;

	//验证迭代器不支持随机访问
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it = it + 2;				报错，不可跳跃



}

int main()
{
	test01();
	system("pause");
	return 0;
}