//#include<iostream>
//using namespace std;
//
////�﷨��class ���� : �̳з�ʽ ����1 , �̳з�ʽ ����2 ...
////��̳п��ܻᵼ�¶��������Ա���֣�Ҫ�����������֣�ʵ�ʲ�����
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_B = 100;
//		m_A = 200;
//	}
//	int m_B;
//	int m_A;
//
//};
//
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << "sizeof Son = " << sizeof(s) << endl;
//	//���������ͬ����Ա��Ҫ������������
//	//cout << "m_A = " << s.m_A << endl;				//������	����
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}