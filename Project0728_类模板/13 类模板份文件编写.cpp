#include<iostream>
using namespace std;

//�����ʽ
//1��ֱ�Ӱ���Դ�ļ�
//#include"Person.cpp"				

//2����.h��.cppд��һ�𣬸�Ϊ.hpp
#include"Person.hpp"

//��ģ��ķ��ļ���д�������Լ����

void test01()
{
	Person<string, int> p("Jerry", 18);
	p.ShowPerson();
}


int main()
{
	test01();
	system("pause");
	return 0;
}