//#include<iostream>
//using namespace std;
//
////�̳���ͬ����Ա����
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base �µĺ�������" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base �µĺ�������" << endl;
//
//	}
//	int m_A;
//};
//class Son: public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son �µĺ�������" << endl;
//	}
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;				//ͬ���ķ��ʣ����Ϊ200����������
//	cout << "Base �� m_A = " << s. Base::m_A << endl;		//Ҫͨ�����������ʸ���ͬ����Ա��Ҫ��������
//	s.func();
//	s.Base::func();				//��Ա����ͬ��Ա����
//
//	//��������г��ָ����ͬ����Ա���������������ͬ�����صĳ�Ա������������
//	//s.func(10);
//	s.Base::func(10);
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}