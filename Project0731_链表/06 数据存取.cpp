#include<iostream>
using namespace std;
#include<list>

void test01()
{
	//���ݴ�ȡ
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//��֧��   at   []    �������				list���������������������Կռ�洢���ݣ��������ǲ�֧��������ʵģ�ֻ���õ�����++++++
	//L1[0]
	//L1.at(0)

	cout << "��һ��Ԫ�أ�" << L1.front() << endl;
	cout << "���һ��Ԫ�أ�" << L1.back() << endl;

	//��֤��������֧���������
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it = it + 2;				����������Ծ



}

int main()
{
	test01();
	system("pause");
	return 0;
}