#include<iostream>
using namespace std;
#include<set>

//set/multiset 属于关联式容器，底层结构用二叉树实现
//set不允许重复元素，multiset可以

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;
	//插入insert
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	printSet(s1);

	//set容器特点：
	//1、所有元素插入时自动被排序
	//2、set容器不允许插入重复的值

	//拷贝构造
	set<int>s2(s1);
	printSet(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printSet(s3);


}



int main()
{
	test01();
	system("pause");
	return 0;
}