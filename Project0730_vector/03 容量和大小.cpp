#include<iostream>
using namespace std;
#include<vector>

void printArray(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printArray(v1);
	if (v1.empty())
		cout << "v1Ϊ��" << endl;
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1��������" << v1.capacity() << endl;
		cout << "v1�Ĵ�С��" << v1.size() << endl;
	}
	//����ָ����С
	v1.resize(15,100);			//�������ؿ���ָ�����Ĭ��ֵ
	printArray(v1);				//�������ָ���ı�ԭ������Ĭ����0����µ�λ��

	v1.resize(5);
	printArray(v1);				//�����ᱻɾ��


}



int main()
{
	test01();

	system("pause");
	return 0;
}