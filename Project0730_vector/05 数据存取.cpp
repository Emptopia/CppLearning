#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//1������[]����
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	//2������at����
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	//3����ȡ��һ��Ԫ��
	cout << "��һ��Ԫ�أ�" << v1.front() << endl;
	//4����ȡ���һ��Ԫ��
	cout << "���һ��Ԫ�أ�" << v1.back() << endl;


}


int main()
{
	test01();
	system("pause");
	return 0;
}