//#include<iostream>
//using namespace std;
//
////�ֳƷº���������stl
//
//class MyPrint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//class MyAdd
//{
//public:
//	int operator()(int num1, int num2)				//�º���û�й̶�д���������
//	{
//		return num1 + num2;
//	}
//};
//
//void MyPrint02(string test)				//������ӡ����
//{
//	cout << test << endl;
//}
//
//void test01()
//{
//	MyPrint myPrint;
//	myPrint("Hello world!");			//�º��������൱�ɺ�����ʹ��
//	MyPrint02("Hello world!");
//}
//
//void test02()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << ret << endl;
//
//	//������������					����������ֱ������ĺ���
//	cout << MyAdd()(100,100) << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}