/*
#include<iostream>
using namespace std;

int main()
{
*/

	//ָ��
	/*int a = 10;
	//ָ�붨���﷨����������* ������
	int* p; 
	//ָ�������ֵ
	p = &a;   
	cout << &a << endl;
	cout << p << endl;								//pֻ���������ַ

	//ָ���ʹ��
	//ͨ��*ָ��������ڴ�
	*p = 1000;											//�ı�*p���ı���Ǳ������ڴ�
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;*/
	//ָ����ռ�ڴ�ռ�
	/*int a = 10;
	int* p = &a;			
	int b = sizeof(p);
	cout << b << endl;		//ָ����32λռ4���ֽڣ�64λռ8���ֽ�
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;*/
	//��ָ��
	/*int* p = NULL;				//ָ�������ʼ��
	cout << *p << endl;		//0~255֮����ڴ�����ϵͳռ�õģ��ʿ�ָ���޷�����*/
	//Ұָ��
	/*int* p = (int*)0x1100;		//ָ��Ƿ��ڴ�ռ�	
	cout << *p << endl;			//����Ұָ�뱨��  (��ָ��������ַ�����ڵ�ǰ���̵Ŀռ䣬Խ���쳣
	*/
	//const����ָ��
	/*
	int a = 10;
	int b = 10;
	const int* p1 = &a;		//1������ָ��(const��*���޶�*������ֵַ)			(����ָ��ֵ)
	p1 = &b;						//ָ��ָ��ɸ�
	//*p1 = 20;					//ָ��ָ���ֵ���ɸ�

	int* const p2 = &a;		//2��ָ�볣��(const��p2���޶�p2����ָ��)		(����ָ��)
	//p2 = &a;					//ָ��ָ�򲻿ɸ�
	*p2 = 20;						//ָ��ָ���ֵ�ɸ�

	const int* const p3 = &a;			//3��������ָ�룬�����γ���
	//p3 = &b;								//ָ��ָ�򲻿ɸ�
	//*p3 = 20;								//ָ��ָ���ֵ���ɸ�

	system("pause");
	return 0;
}
*/