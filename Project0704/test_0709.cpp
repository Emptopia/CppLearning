/*#include<iostream>
using namespace std;

//�����Ķ���
int add(int num1, int num2)
{
	int num = num1 + num2;
	return num;
}

int main()
{
	cout << add(1, 2) << endl;
	*/



	//goto
	/*
	cout << "1��xxx" << endl;
	cout << "2��xxx" << endl;
	goto FLAG;
	cout << "3��xxx" << endl;
	cout << "4��xxx" << endl;
	FLAG:
	cout << "5��xxx" << endl;
	*/
	//����
	/*
	int arr[5];
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;
	cout << arr[0] << endl;
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i <5  ; i++)
	{
		cout << arr2[i] << endl;
	}*/
	//��������;
	/*
	//ͳ������ռ�ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�ڴ�ռ�Ϊ" << sizeof(arr) << endl;		//40
	cout << "ÿ��Ԫ��ռ�ڴ�ռ�Ϊ" << sizeof(arr[0]) << endl;		//4
	cout << "������Ԫ�ظ���" << sizeof(arr)/sizeof(arr[0]) << endl;		//
	cout << "������Ԫ�ظ���" << size(arr) << endl;		//
	//�鿴�����ַ
	cout << "�����׵�ַΪ" << (int)arr << endl;		//16����ǿת10����
	cout << "�����е�һ��Ԫ�صĵ�ַΪ" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַΪ" << (int)&arr[1] << endl;*/
	//���鰸������ֻС�������
	/*
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;*/
	//���鰸��������Ԫ������ �ҵķ���
	/*
	int arr[5] = { 1,3,2,5,4 };
	int const arl = size(arr);
	int arr2[arl];
	for (int i = 0; i < arl; i++)
	{
		arr2[i] = arr[arl -1 - i];
		cout << arr2[i] << endl;
	}*/
	//���鰸��������Ԫ������ ʵ�ʷ���
	/*
	int arr[5] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr)/sizeof(arr[0])-1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < size(arr); i++)
	{
		cout << arr[i] << endl;
	}*/
	//ð������(��Ҫ)
	/*
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int const arl = size(arr);				//arl=9
	cout << arl << endl;
	for (int j = 0; j <arl-1; j++)		//����������Ϊ Ԫ�ظ���-1
	{
		for (int i = 0; i < arl - j - 1; i++)		//�Ƚϴ���=Ԫ�ظ���-��ǰ��������-1
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout << "�Ƚ�һ�ν��" << endl;
	for (int i = 0; i < arl; i++)
	{
		cout << arr[i] << " ";
	}*/
	//��ά����
	/*//��������1
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	//��������2
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//��������3 
	int arr3[2][3] = { 1,2,3,4,5,6, };
	//��������4
	int arr4[][3] = { 1,2,3,4,5,6 };		//д��3�м�ÿ3��һ�У��Զ�����Ϊ2��
	//���ѭ����ӡ����//�ڲ�ѭ����ӡ����
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)	
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}*/
	//��ά�������Ƶ�����
	/*
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;
	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "��ά�����׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ��" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;		//���12
	cout << "��ά����ڶ��е�һ��Ԫ���׵�ַΪ��" << (int)&arr[1][0] << endl;		//ȡַ��
	*/
	//��ά���鰸�������Գɼ�ͳ��
	/*int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "����","����","����" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j =0; j < 3; j++)		
		{
			sum += score[i][j];
		}
		cout  << names[i] << "���ܷ��ǣ�" << sum << endl;
	}*/



/*
	system("pause");
	return 0;
}*/