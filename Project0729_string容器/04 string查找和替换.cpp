#include<iostream>
using namespace std;
//1������
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");								//�Ҳ����򷵻�-1
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ���" << endl;
		cout << "pos = " << pos << endl;				//����3
	}
	
	pos = str1.rfind("de");										//����7�����������
	cout << "pos = " << pos << endl;				
}

void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");			//��1λ�ÿ�ʼȥ��3������ָ���ַ���
	cout << str1 << endl;
}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}