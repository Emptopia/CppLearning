#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//替换 所有指定 旧的为新的
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	cout << "替换前" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	replace(v.begin(), v.end(), 20, 20000);

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