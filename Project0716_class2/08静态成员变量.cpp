//#include<iostream>
//using namespace std;
//
////��̬��Ա�����ڳ�Ա�������Ա����ǰ��static
//
//
//
//class Person
//{
//public:
//	//��̬��Ա����
//	//1�����ж�����ͬһ������
//	//2���ڱ���׶η����ڴ�				ȫ����������ִ��ǰ
//	//3�����������������ʼ��			
//	static int m_A;						//��������
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;			//	�����ʼ��
//int Person::m_A = 200;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;		//���У�һ���޸�
//
//}
//
//void test02()
//{
//	//��̬��Ա���ж�����������ĳ������
//
//	//1��ͨ���������
//	Person p;
//	cout << p.m_A << endl;
//
//	//2��ͨ����������
//	cout << Person::m_A << endl;
//
//	//������ʲ���˽�еĳ�Ա
//	//cout << Person::m_B << endl;			
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}