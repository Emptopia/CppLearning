//#include<iostream>
//using namespace std;
//
////�����������ķ���ֵ
//
//int& test01()
//{
//	int a = 10;	//�ֲ���������������е�ջ��
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;	//��̬������ȫ���������������ϵͳ�ͷ�
//	return a;
//}
//
//
//
//int main()
//{
//	//1����Ҫ���ؾֲ���������
//	int& ref = test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;			//����һ�κ�ʧȥ��a���ڴ��Ѿ����ͷ�
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;		//�����ȷ
//
//	//2�������ĵ��ÿ�����Ϊ��ֵ
//	test02() = 1000;										//�൱��a=1000
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;		//ref2=1000
//
//
//	system("pause");
//	return 0;
//}