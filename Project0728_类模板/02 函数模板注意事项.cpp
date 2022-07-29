#include<iostream>
using namespace std;

//����ģ��ע������
template<typename  T>			//typename�����滻��class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1���Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������T����ʹ��
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);
	//mySwap(a, c);		�����Ƶ�����һ�µ�T
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

}

//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func����" << endl;
}

void test02()
{
	//func();				�����Ƶ�����T
	func<int>();
}



int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
