#include<iostream>
using namespace std;

//C++��һ�ֱ��˼�룺���ͱ�̣���Ҫ�õļ�������ģ��
//����ģ����ƣ�����ģ�塢��ģ��

//����ģ��

//�����������εĺ���
//��ͨ����
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//�������������εĺ���
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}


template<typename T>		//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��ͨ����������
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//1���Զ������Ƶ�
	mySwap(a, b);					//����ʱ��T�Ƶ�Ϊint
	//2����ʾָ������
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}


int main()
{
	test01();



	system("pause");
	return 0;
}
