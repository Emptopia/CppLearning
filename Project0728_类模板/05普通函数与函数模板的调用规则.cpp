#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ��ĵ��ù���
//1���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2������ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//3������ģ����Է�����������
//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

void myPrint(int a,int b)
{
	cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ�庯��" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "��������ģ�庯��" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);					//���ȵ�����ͨ����

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);

	//���ص���
	int c = 100;
	myPrint(a, b, c);

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);			//ģ��ƥ����char���������ȣ���ͨ������Ҫ��ʽת��
}

int main()
{
	test01();


	system("pause");
	return 0;
}
