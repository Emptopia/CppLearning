//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
////�ı��ļ�	���ļ�
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2������������
//	ifstream ifs;					//����������ȡ
//
//	//3�����ļ����Ƿ�򿪳ɹ�
//	ifs.open("text.txt", ios::in);				//ios::in  ��
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ�ܣ�" << endl;
//		return;
//	}
//
//	//4��������
//
//	//����һ
//	//char buf[1024] = { 0 };				//������һ����СΪ1024��char���飬��������Ԫ�ظ�ֵΪ0��
//	//while (ifs >> buf)						//����ͷ�˾ͷ���false��whileѭ���ж�
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))				//getline(Ҫ��������׵�ַ,Ҫ�����ֽ���)
//	//{
//	//	cout << buf << endl;
//	//}
//	
//	//������
//	//string buf;										//����
//	//while (getline(ifs, buf))					//getline(���������������ŵ��ַ�����		Ҫ��stringͷ�ļ�Ŷ��
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)			//һ��һ���ַ�����û�ж���end of file����һֱ��
//	{
//		cout << c;									//Ч�ʵͣ�������
//	}
//
//	//5���ر��ļ�
//	ifs.close();
//}
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