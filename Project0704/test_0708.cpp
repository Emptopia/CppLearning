/*
#include <iostream>
using namespace std;
#include <ctime>

int main()
{
*/
	/*ѭ���ṹ
int num = 0;
while (num <10)
{
	cout << num << endl;
	num++;
}
*/
	/*while����
//������������ ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
srand((unsigned int)time(NULL));
int num =rand() % 100+1;		//����1-100�������		rand()%100 ���� ����0-100֮�䣬��1-99
//cout << num << endl;
int val = 0;
while (true)
{
	cin >> val;
	if (val > num)
	{
		cout << "�²����" << endl;
	}
	else if (val < num)
	{
		cout << "�²��С" << endl;
	}
	else
	{
		cout << "�²���ȷ" << endl;
		break;
	}
}*/
	//�������

	/*do while
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num <10);
	*/
	/*
	������ˮ�ɻ���
	һ��3λ����ÿ��λ�ϵ����ֵ�3����֮�͵���������
	1^3+5^3+3^3 =153
	��do while ����ҵ�����ˮ�ɻ���
	
	int num = 100;
	do
	{
		int a = num%10;			//��λ
		int b = num/10%10;		//ʮλ
		int c = num/100;			//��λ
		if ((a*a*a+b * b* b+c * c * c)==num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	*/
	//ˮ�ɻ���

	/*forѭ��
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/
	/*for ������������
	��λ7��ʮλ7��7�ı��� ���������
	

	for (int  i = 0; i < 100; i++)
	{
		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0)
		{
			cout << "������" << i << endl;
		}
	}*/
	/*Ƕ��ѭ��
	for (int  i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << " *";
		}
		cout << endl;
	}*/
	/*Ƕ�װ��� �˷��ھ���
	for (int i = 1; i <=9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= i; j++)
		{
			cout << j<< "*" << i << "=" << j*i << "\t";
		}
		cout << endl;

	}
	*/		
	//�˷��ھ�

	//break����������
	/*1��switch���
	cout << "��ѡ���Ѷ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	}*/
	/*2��ѭ�����
	for(int  i=0; i<10;i++)
	{
		if (i == 5)
			break;
		cout << i << endl;
	}*/
	/*3��Ƕ��ѭ�����
	for (int i=0;i<10;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << " *";
		}
		cout << endl;
	}*/

	/*continue���
	for( int i =0; i<=100; i++)
	{
		if (i % 2 == 0)
		{
			continue;	//ż�������
		}
		cout << i << endl;
	}
	*/

/*
	system("pause");
	return 0;

}*/