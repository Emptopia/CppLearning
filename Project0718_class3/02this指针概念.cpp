//#include<iostream>
//using namespace std;
//
////thisָ��ָ��  �����õ�  ��Ա�����Ķ���	
////thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�ָ��
////this����Ҫ���壬ֱ��ʹ�ü���
//
////1��������Ƴ�ͻ
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//	Person& PersonAddAge(Person& p)			//����˴���ͷ����Person&����ôһ�ε��ú󷵻صĽ���һ��ֵ�����µ�Person���޷���ʽ
//	{
//		this->age += p.age;
//		//thisָ��p2��ָ�룬*this����p2����
//		return *this;		
//	}
//	int age;			//Ҳ����ע�������淶
//};
//
//void test01()
//{
//	Person p1(18);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
//
////2�����ض�����*this
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}