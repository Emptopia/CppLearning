#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//��������		adjacent

void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());			//���ص�Ӧ���ǵ�һ����ͬ��Ԫ��
	if (pos == v.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << *pos << endl;
	}
	while (pos != v.end())
	{
		pos++;
		cout << "++һ��" << endl;
	}



}

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()			//�Լ�����
{
	vector<int>v = { 1,1,2,3,3 };
	vector<int>::iterator it;
	vector<int>::iterator it2;
	it = adjacent_find(v.begin(), v.end());
	//it2 = (it++);
	it = v.erase(it);						//ɾ���󣬷��ص��Ǳ�ɾ������һ��λ�õĵ�����
	v.erase(it);								//������ɾ
	printVector(v);
	it = adjacent_find(v.begin(), v.end());
	//it2 = (it++);
	it = v.erase(it);
	v.erase(it);
	printVector(v);
	it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
		cout << "��" << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}