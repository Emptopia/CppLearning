//#include<iostream>
//using namespace std;
//
////�������Ϊ���Ա
//
////����ִ�г�Ա��Ĺ��캯��������˳���෴
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//
//	}
//	string m_PName;
//};
//class Person
//{
//public:
//	// �˴���벿���൱�� Phone m_Phone = pName;	��ʽת����
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//
//	}
//	// ����
//	string m_Name;
//
//	//�ֻ�
//	Phone m_Phone;
//};
//void test01()
//{
//	Person p("����", "ƻ��max");
//	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}