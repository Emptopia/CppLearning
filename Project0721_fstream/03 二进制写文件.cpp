//#include<iostream>
//#include<fstream>
//using namespace std;
//
////�������ļ�    д�ļ�
////�������ļ��򿪺�������Ŷ
//class Person
//{
//public :
//	char m_Name[64];			//char���飬�൱��string ������ò���string
//	int m_Age;
//};
//
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2������������
//	ofstream ofs;
//	//ofstream ofs("person.txt", ios::out | ios::binary);	//Ҳ����ֱ�ӹ��죬����һ
//	
//	//3�����ļ�
//	ofs.open("person.txt", ios::out | ios::binary);			//|��λ���ö�������д
//	//4��д�ļ�
//	Person p = { "����", 18 };			//�ṹ���Դ��ĸ�ֵ����
//	ofs.write((const char*)&p, sizeof(Person));					//Person*  ǿת�� char*   
//
//	//5���ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}