#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//概念
	//返回bool类型的仿函数称为谓词
	//如果operator()接受一个参数，那么叫做一元谓词
	//如果operator()接受两个参数，那么叫做二元谓词

//一元谓词
class CreateFive
{
public:
	bool operator ()(int val)
	{
		return val > 5;			//数值大于5返回真，否则为假
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中，有没有大于5的数字
	//CreateFive()匿名函数对象
	//find_if			按条件查找
	vector<int>::iterator it = find_if(v.begin(), v.end(), CreateFive());									//参数中_Pred代表谓词		predicate
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了大于5的数字为：" << *it << endl; 
	}

}


int main()
{
	test01();
	system("pause");
	return 0;
}