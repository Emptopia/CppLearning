#include<iostream>
using namespace std;
#include<map>

//map������Ԫ�ض���pair
//��һ��Ԫ�أ�key����ֵ�����������á�
//�ڶ���Ԫ�أ�value��ʵֵ
//����Ԫ�ػᰴ��key����

//multimap�����ظ�key��map������

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " Value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//Ĭ�Ϲ���
	map<int, int>m;
	m.insert(pair<int, int>(1,10));				//��Ϊ��������
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	//��������
	map<int, int>m2(m);
	printMap(m2);

	//��ֵ
	map<int, int>m3;
	m3 = m2;
	printMap(m3);
}


int main()
{
	test01();


	system("pause");
	return 0;
}
