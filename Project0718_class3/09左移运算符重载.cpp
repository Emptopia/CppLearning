//#include<iostream>
//using namespace std;
//
////����<<�����
////��������Զ������������
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//һ�㲻�ó�Ա���������������������Ϊ�޷�ʹcout�����
//	//ostream operator<<(cout){}
//
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<<(ostream& cout, Person p)			//���� operator<< (cout,p)			�� cout << p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
//	return cout;				//Ϊ��ʵ����ʽ�������ܸ���endl��Ҫreturn��cout���������ã�ostream&
//}
//void test01()
//{
//	Person p(10, 10);
//	cout << p << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}