//#include<iostream>
//using namespace std;
//
////Ĭ��������������һ���������������
////Ĭ�Ϲ��캯����Ĭ������������Ĭ�Ͽ������캯��
//
////д���вΣ���û��Ĭ�Ϲ��캯��
////д�˿�������û������Ĭ�Ϲ��캯��
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "PersonĬ�Ϲ��캯������" << endl;
//	//}
//	//Person(int Age)
//	//{
//	//	m_Age = Age;
//	//	cout << "Person�вι��캯������" << endl;
//	//}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	//Person p;
//	//p.m_Age = 18;
//	//Person p2(p);
//	//cout << "p2������Ϊ��" << p2.m_Age << endl;			//Ĭ�ϵĿ������캯�����ṩ�� ֵ�Ĵ���
//}
//
//void test02()
//{
//	//Person p;					//ֻд�вι��캯��ʱ������Person������Ĭ�Ϲ��캯��
//}
//
//void test03()
//{
//	//Person p;
//	//Person p(10);			//ֻд�������캯��ʱ�������������в��޲ε�Ĭ�Ϲ��캯��
//}
//
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}