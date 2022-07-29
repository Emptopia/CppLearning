#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//vector容器存放内置数据类型

void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建了一个vector容器
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	////通过迭代器访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();			//起始迭代器		指向容器第一个元素
	//vector<int>::iterator itEnd = v.end();					//结束迭代器		指向容器最后一个元素的下一个位置

	////第一种遍历
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	////第二种遍历				等于上面的合并
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//第三种遍历			利用stl中提供的遍历算法for_each()			要包含algorithm
	for_each(v.begin(), v.end(), myPrint);			//第三个写函数名

	//底层
	//_Fn for_each(_InIt _First, _InIt _Last, _Fn _Func) { // perform function for each element [_First, _Last)
	//	_Adl_verify_range(_First, _Last);
	//	auto _UFirst = _Get_unwrapped(_First);
	//	const auto _ULast = _Get_unwrapped(_Last);
	//	for (; _UFirst != _ULast; ++_UFirst) {
	//		_Func(*_UFirst);
	//	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}