#include<iostream>
using namespace std;
#include<vector>

void printArray(vector<int>& v1)
{
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int> v1;

	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printArray(v1);

	//尾删
	v1.pop_back();
	printArray(v1);

	//插入
	v1.insert(v1.begin(), 100);			//第一个参数是迭代器！
	printArray(v1);				
	v1.insert(v1.begin(), 2, 1000);		//2个1000	
	printArray(v1);				

	//删除
	v1.erase(v1.begin());					//同上
	printArray(v1);
	v1.erase(v1.begin(), v1.end());		//提供区间			此处效果即为清空
	//v1.clear();									//清空
	printArray(v1);

}




int main()
{
	test01();

	system("pause");
	return 0;
}