#include<iostream>
using namespace std;
#include<vector>
//vector可以动态扩展，会找更大的内存空间，拷贝原数据，释放原空间
//vector迭代器支持随机访问

//构造函数

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//1、默认构造
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//2、区间构造			传入迭代器
	vector<int>v2(v1.begin(), v1.end());			//会取到	[begin,end)	的数来构造
	printVector(v2);

	//3、n个elem的方式构造
	vector<int>v3(10, 100);				//10个100
	printVector(v3);

	//4、拷贝构造				//常用
	vector<int>v4(v3);
	printVector(v4);
}



int main()
{
	test01();

	system("pause");
	return 0;
}