//#include<iostream>
//using namespace std;
//
////��ָ����Ե��ó�Ա����
//
//class Person
//{
//public :
//	void showClassName()
//	{
//		cout << "this is Person class " << endl;
//	}
//
//	void showPersonAge()
//	{
//		//����ԭ��Ϊ����ָ��ΪNULL
//		if (this == NULL)
//		{
//			return;															//��ߴ����ȶ���
//		}
//		cout << "age = " << m_Age << endl;			//��ʱ���� this -> m_Age
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();					//��������
//	p->showPersonAge();				//this�ǿ�ָ�룬��ȡ����Ȩ�޳�ͻ
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