//#include<iostream>
//using namespace std;
//
////++ʵ���Լ�����������
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//����++�����
//	//1��ǰ��++
//	MyInteger& operator++()			//����������Ϊ��һֱ��һ�����ݽ��е�������ʽ
//	{
//		//��++
//		m_Num++;
//		//�ٷ���
//		return *this;
//	}
//
//
//	//2������++
//	//���int����ռλ��������������ǰ�ú��ã�ֻ����int
//	MyInteger operator++(int)			//�˴����ɷ������ã���Ϊ���н�����temp�ᱻ�ͷ�
//	{
//		//�ȼ�¼���
//		MyInteger temp = *this;
//		//�����
//		m_Num++;
//		//���ؼ�¼�Ľ��
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//};
//
////����<<�����
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//
//
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//}
//void test02()
//{
//	MyInteger myint2;
//	cout << myint2++ << endl;
//	cout << myint2 << endl;
//
//}
//
//
//
//int main()
//{
//	test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}