#include<iostream>
using namespace std;

//1����ͨ��������						 ����		������ʽ����ת��
//2������ģ��  ��  �Զ������Ƶ���������	������ʽ����ת��
//3������ģ��  ��  ��ʾָ�����ͣ�����		������ʽ����ת��

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';				//a - 97		c - 99				
	cout << myAdd01(a, c) << endl;			//10+99=109

	//1���Զ������Ƶ�
	//cout << myAdd02(a, c) << endl;			//�޷��Ƶ���һ���������ͣ��޷���ʽת��
	
	//2����ʾָ������
	cout << myAdd02<int>(a, c) << endl;	//������ʽ����ת��
}


int main()
{
	test01();
	system("pause");
	return 0;
}
