#include<iostream>
using namespace std;
#include<map>

void test01()
{
	//����
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "�ҵ���key = " << pos->first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//ͳ��
	int num = m.count(3);
	cout << "num = " << num << endl;			//map�������ظ�key����countֻ��0/1




}

int main()
{
	test01();
	system("pause");
	return 0;
}