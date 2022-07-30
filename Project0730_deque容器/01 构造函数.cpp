#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it =100;				为了防止值被修改，加了2处const
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//vector访问更快
	//deque有两端开口，被称为双端数组
	//deque内部有中控器，存有地址，维护每段缓冲区，缓冲区里存在真实数据
	
	//1、构造
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);

}


int main()
{
	test01();
	system("pause");
	return 0;
}