#include<iostream>
using namespace std;
#include<functional>

//ʵ����������
//ȡ��negate()		һԪ����
//�Ӽ��˳�			��Ԫ����

//��negate
void test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

//��plus
void test02()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

//��minus
//��multiplies
//��devides
//ģmodulus

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}