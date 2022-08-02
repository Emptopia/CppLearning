#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//equal_to<T>			等于
//not_equal_to<T>	不等于
//greater<T>			大于
//greater_equal<T>大于等于
//less<T>					小于
//less_equal<T>		小于等于

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test01()
{
	//大于greater
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;



}

int main()
{
	test01();
	system("pause");
	return 0;
}