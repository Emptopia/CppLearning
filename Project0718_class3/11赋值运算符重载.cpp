//#include<iostream>
//using namespace std;
//
////c++���������ٸ�һ�������4������
////1��Ĭ�Ϲ��캯��
////2��Ĭ����������
////3��Ĭ�Ͽ������캯���������Խ��п���
////4����ֵ����� operator=�������Խ��п���
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;				//p2ִ������ʱ�������ڴ��ظ��ͷţ��������
//		}
//	}
//	Person& operator=(Person& p)
//	{
//		//������ǳ����
//		//m_Age = p.m_Age;
//		//���
//
//		//���ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�����
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);			//�˴�Ϊ			ָ�� = new int �������õ�int��	new���صľ���ָ��
//
//		//��������		��ʽ
//		return *this;
//	}
//
//
//	int* m_Age;				//�Դ��ĵȺŸ�ֵ��ǳ������p1,p2�õĶ���ͬһ��ָ��
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//
//
//
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//
//}
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