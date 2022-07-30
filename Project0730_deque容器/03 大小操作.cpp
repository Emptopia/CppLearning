#include<iostream>
using namespace std;
#include<deque>

//deque没有capacity，中控器可以无限的扩展


void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//大小操作
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1大小：" << d1.size() << endl;
	}

	//d1.resize(15);
	d1.resize(15, 1);
	printDeque(d1);
	cout << "d1大小：" << d1.size() << endl;
	d1.resize(5);
	printDeque(d1);

}






int main()
{
	test01();

	system("pause");
	return 0;
}