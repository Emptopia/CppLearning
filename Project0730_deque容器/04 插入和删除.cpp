#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//两端操作
void test01()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	//头插
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//尾删
	d1.pop_back();
	//头删
	d1.pop_front();
	printDeque(d1);
}

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//insert插入
	d1.insert(d1.begin(), 1000);
	printDeque(d1);
	d1.insert(d1.begin(), 2,114514);
	printDeque(d1);
	//区间插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());	
	printDeque(d1);

}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;									//迭代器可以这样偏移
	d1.erase(it);			//删除第二个元素
	printDeque(d1);

	//区间删除
	d1.erase(d1.begin(),d1.end());			//清空
	d1.clear();

}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}