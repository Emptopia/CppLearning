//#include<iostream>
//using namespace std;
//
//class Person
//{
//	int m_A;					//��Ա����				���������
//	int static m_B;			//��̬��Ա����			�������������
//	void func() {}			//�Ǿ�̬��Ա����		�������������
//	static void func2() {}//��̬��Ա����			�������������
//};
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//�ն���ռ���ڴ�ռ䣺1�ֽ�
//	//C++���ÿ���ն������1�ֽڿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//	cout << "size of p = " << sizeof(p) << endl;						
//}
//
//void test02()
//{
//	Person p;
//	//��int���䣬������m_A��4���ֽ�
//	
//	cout << "size of p = " << sizeof(p) << endl;
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}