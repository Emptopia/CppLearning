//#include<iostream>
//using namespace std;
//
////��̬��Ϊ2��
//
////��̬��̬���������غ����������
////��̬��̬����������麯��ʵ������ʱ��̬
//class Animal
//{
//public:
//	//�麯����
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����˵��" << endl;
//	}
//};
//
////��ַ���			�ڱ���׶�ȷ��������ַ
////�����Ҫè˵������ô��ַҪ��󶨣���speak()ǰ		��virtual
//
////��̬��̬������
////1���м̳й�ϵ
////2������Ҫ��д������麯��
//		//��д����������ֵ���� ������ �����б� ��ȫ��ͬ
//
////��̬��̬ʹ��
////		�����ָ�������ָ���������
//
//void doSpeak(Animal& animal)		//Animal& animal = cat ��������ָ���������
//{
//	//��ʱִ�и���ͬ������
//	animal.speak();
//}
//
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
