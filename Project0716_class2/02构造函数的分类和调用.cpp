//#include<iostream>
//using namespace std;
//
////���캯���ķ���
//class Person
//{
//public:
//	//���캯���ķ���			�޲Σ�Ĭ�ϣ����вΡ��������캯��
//	Person()
//	{
//		cout << "Person�޲ι��캯������" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person�вι��캯������" << endl;
//	}
//	Person(const Person& p)
//	{
//		//������������ϵ��������ԣ�������������
//		age = p.age;
//		cout << "Person�������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int age;
//};
//
////���캯���ĵ���
//void test01()
//{
//	//1�����ŷ�					��ʦ����
//	//Person p1;				//Ĭ�Ϲ��캯���ĵ���
//	//Person p2(10);
//	//Person p3(p2);
//	//ע������
//	// ����Ĭ�Ϲ��캯��ʱ����Ҫ��()
//	// ��Ϊ���д������������Ϊ�Ǻ�������������ֵΪPerson��������Ϊ���ڴ�������
//	// Person p1();
//
//	//cout << "p2�������ǣ�" << p2.age << endl;
//	//cout << "p3�������ǣ�" << p3.age << endl;
//
//	//2����ʾ��
//	Person p1;								//�޲ι���
//	Person p2 = Person(10);			//�вι���
//	Person p3 = Person(p2);			//��������
//	//Person(10);			//��������    �ص㣺��ǰ!��!ִ����Ϻ�ϵͳ����������
//
//	//ע������2
//	//��Ҫ���ÿ������캯��  ��ʼ����������
//	//Person(p3);			//�����ض��壬����������Ϊ  Person(p3) = Person p3;
//
//
//	//3����ʽת����
//	Person p4 = 10;			//�൱��д��    Person p4 = Person(10);
//	Person p5 = p4;			//��������
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}