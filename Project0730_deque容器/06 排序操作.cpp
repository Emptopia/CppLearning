#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>			//标准算法头文件a

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	} 
	cout << endl;
}

void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);

	//sort			升序排序			vector也可以用
	sort(d.begin(),d.end());
	printDeque(d);

}



int main()
{
	test01();

	system("pause");
	return 0;
}