//#include<iostream>
//using namespace std;
//
////1��new�Ļ����﷨
//int* func()
//{
//	//�ڶ���������������
//	//new���ص��Ǹ��������͵�ָ��
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	//�����������ɳ���Ա�����ٺ��ͷ�
//	int* p = func();
//	cout << *p << endl;
//	//�ͷ�
//	delete p;
//	//cout << *p << endl;			//�Ƿ�����Ȩ�ޣ�pָ���ڴ����ͷţ���ʱpָ��Ŀռ��ǲ�ȷ����
//}
//
////2���ڶ�������new��������
//void test02()
//{
//	//����10�������ݵ�����
//	int* arr = new int[10];			//[10]����������10��Ԫ�أ������׵�ַ
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	delete[] arr;						//�ͷ�����ʱҪ��[]
//	//for (int i = 0; i < 10; i++)			//�Ƿ�����
//	//{
//	//	cout << arr[i] << endl;
//	//}
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}