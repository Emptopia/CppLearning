#include<iostream>
using namespace std;

//��ģ���Ա�����ڵ���ʱ��ȥ����

class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1 Show" << endl;
	}
};

class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2 Show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	void func1()
	{
		//��δȷ��T���ͣ�δ��������ʱ������ȥ�����Ա����
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1> m;
	m.func1();
	//m.func2();			//����ʱ����showPerson2����Person1�ĳ�Ա
}

int main()
{
	test01();

	system("pause");
	return 0;
}
