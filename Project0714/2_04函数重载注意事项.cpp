#include<iostream>
using namespace std;

//ע������
//1��������Ϊ���ص�����
void func(int &a)					//func(10);�൱��   int& a =10; ���Ϸ�
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a)		//�൱��const int& a =10;    ��ʱ�ռ䣬�Ϸ�����
{
	cout << "func(const int &a)����" << endl;
}

//2������������ΪĬ�ϲ���
void func2(int a, int b =10)
{
	cout << "func2(int a, int b)����" << endl;
}

void func2(int a)
{
	cout << "func2(int a)����" << endl;
}

int main()
{
	int a = 10;
	//func(a);			//���õ�һ���汾
	//func(10);		//���õڶ����汾
	//func2(10);		//��������������Ĭ�ϲ���������ֶ�����


	system("pause");
	return 0;
}