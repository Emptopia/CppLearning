//#include<iostream>
//using namespace std;
//
//
//
//class Animal
//{
//public:
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
//
//void doSpeak(Animal& animal)		//��̬����~~~
//{
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
//void test02()
//{
//	//��virtual����ʱ������ռ1�ֽ�
//	//��virtual����ʱ������һ��ָ��		4�ֽ�(32)		8�ֽ�(64)
//
//	//Animal��
//	//vfptr			virtual function pointer	�麯��ָ��
//	//vftabel		virtual function table		�麯����
//	//vfptrָ��vftable�����ڲ���¼�麯���ĵ�ַ		&Animal::speak
//
//	//Cat��
//	//vfptrָ��vftable�����ڲ���¼�麯���ĵ�ַ		&Animal::speak��δ��дʱ��
//	//����������д���麯����������麯������滻��������麯����ַ	&Cat::speak��δ��дʱ��
//	//�������ָ���������ָ���������ʱ��������̬		����Animal& animal = cat;ʱ
//
//
//	cout << "sizeof Animal = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
