#include<iostream>
using namespace std;
#include<vector>

//容器嵌套容器
void test01()
{
	vector<vector<int>>v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//小容器添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	
	//将小容器插入到大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	
	//通过大容器，遍历所有数据
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)		是一个vector<int>的容器，		所以要再根据这个遍历一次
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit) << " ";				//此处*vit为	int
		}
		cout << endl;
	}


}



int main()
{
	test01();

	system("pause");
	return 0;
}