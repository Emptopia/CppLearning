//#include<iostream>
//using namespace std;
//
////������
//class Person
//{
//public:
//	void showPerson() const
//	{
//		//thisָ��ı�����һ��ָ�볣����ָ��ָ�򲻿��޸�
//		//�������const����Ϊ�������������޸�ָ��ֵ 
//		
//		//this -> m_A = 100;			//const�����޸�ָ��ֵ
//		//this->NULL;						//ָ�򲻿��޸�
//		m_B = 100;							//mutable��Ա���ڳ��������޸�
//		this->m_B = 100;					//ͬ��
//	}
//	void func() 
//	{
//		m_A = 500;
//	}
//	int m_A;
//	mutable int m_B;
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//
////������
//void test01()
//{
//	const Person p;
//	//p.m_A = 100;			//�����󲻿��޸���ͨ��Ա����
//	p.m_B = 200;				//mutable��Ա�����޸�
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();						//���ɵ��ã���Ϊ��ͨ��Ա���������޸���ͨ��Ա����
//}
//
//
//
//int main()
//{
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}