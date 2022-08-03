#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void myPrint(int val)
{
	cout << val << " ";
}

//Ï´ÅÆ
void test01()
{
	srand((unsigned int)time(NULL));

	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

}


int main()
{

	test01();
	system("pause");
	return 0;
}