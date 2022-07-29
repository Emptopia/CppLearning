#include<iostream>
using namespace std;
//ͨ��ȫ�ֺ�����ӡPerson��Ϣ

//��ǰ�ñ�����֪��Person�����
template<class T1, class T2>
class Person;

//��ǰ�ñ�����֪���������
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "����  ������" << p.m_Name << " ���䣺" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ���    ����ʵ��
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "����  ������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	}
	//ȫ�ֺ���    ����ʵ��
	//�����ȫ�ֺ���  ������ʵ�֣���Ҫ�ñ�����֪����������Ĵ���		����ǰ�ڿ�ͷ����������			
	friend void printPerson2<>(Person<T1, T2> p);		//�ټ�һ����ģ��Ĳ����б�

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//void showPerson();
	//{
	//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	//}

private:
	T1 m_Name;
	T2 m_Age;
};

//1��ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int>p("Tom", 20);
	printPerson(p);
}

//2��ȫ�ֺ�������ʵ��
void test02()
{
	Person<string, int>p("Jerry", 20);
	printPerson2(p);
}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}