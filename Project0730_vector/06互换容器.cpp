#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//1、基本使用
void test01()
{
	cout << "交换前" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	cout << "交换后" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

}


//2、实际用途
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;

	v.resize(3);
	cout << "v的容量：" << v.capacity() << endl;			//不变，浪费了空间
	cout << "v的大小：" << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);									//vector<int>(v)		是匿名对象，交换v后，本行结束时匿名对象被系统回收
	cout << "v的容量：" << v.capacity() << endl;			//swap后容量缩小拉
	cout << "v的大小：" << v.size() << endl;


}



int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}