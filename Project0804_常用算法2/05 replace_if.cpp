#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//替换 所有满足条件的 旧的为新的
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
class Greater30
{
public:
	bool operator ()(int val)
	{
		return val >= 30;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);

	cout << "替换前" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	//将大于30的替换为3000
	replace_if(v.begin(), v.end(), Greater30(), 3000);

	cout << "替换后" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;
}