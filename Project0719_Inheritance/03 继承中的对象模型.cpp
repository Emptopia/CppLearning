//#include<iostream>
//using namespace std;
//
//
////�򿪹���	vs20**������Ա������ʾ��		�鿴����ģ��
////��ת�̷�	d:
////��ת·��	cd D:\c++_project\Project0719_Inheritance
////�鿴����	dir
////���沼��	cl/d1 reportSingleClassLayout���� "***.cpp"
//
////�̳��еĶ���ģ��
////lass Son       size(16) :
////	+-- -
////	0 | +-- - (base class Base)
////	0      | | m_A
////	4      | | m_B
////	8      | | m_C
////	| +-- -
////	12 | m_D
////	+ -- -
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	//16Byte		�������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//					������˽�г�Ա���Ա����������أ���˷��ʲ���������ȷʵ���̳���ȥ��
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}