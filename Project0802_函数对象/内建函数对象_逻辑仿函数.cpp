#include<iostream>
using namespace std;
#include<vector>
#include<functional>
#include<algorithm>

//��������
//logical_and<T>	�߼���
//logical_or<T>		�߼���
//logical_not<T>		�߼���

void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�����߼���		������v���˵�v2�У���ִ��ȡ��

	vector<bool>v2;
	v2.resize(v.size());
	//����transform
	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());				//���ĸ�Ϊ_Func�º���
	
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
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