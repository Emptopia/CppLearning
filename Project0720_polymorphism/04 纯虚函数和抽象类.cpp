//#include<iostream>
//using namespace std;
//
////�﷨ virtual ����ֵ���� ������ (�����б�) =0;
//
////ֻҪ��һ�����麯����������Ϊ������
////�������ص㣺
////1���޷�ʵ��������
////2�������������	������д���麯��		����Ҳ���ڳ�����
//class Base
//{
//public:
//	
//	virtual void func() = 0;			//����Ŷ
//};
//class Son : public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func��������" << endl;
//	}
//
//};
//
//void test01()
//{
//	//Base b;					//�������޷�ʵ��������ջ��
//	//new Base;				//�������޷�ʵ�������󣨶�	��
//	Son s;
//	Base* base = new Son;			//��̬		ͨ��һ������ָ�룬���ڶ���ͬ�����ö��ֺ���
//	base->func();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
