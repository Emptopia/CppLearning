#include<iostream>
using namespace std;
#include<set>

//����
void test01()
{
	set<int>s1;
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//find(key)				//����key�Ƿ���ڣ������ڣ����ص���������������ڣ�����set.end()
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��" << *pos <<endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//count(key)				//ͳ��key�ĸ�������set��ֻ��0/1
}

//ͳ��
void test02()
{
	set<int>s1;
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	int num = s1.count(30);
	cout << "30�ĸ���Ϊ��" << num << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}