//#include<iostream>
//using namespace std;
//
////类对象作为类成员
//
////会先执行成员类的构造函数，析构顺序相反
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的构造函数调用" << endl;
//
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//
//	}
//	string m_PName;
//};
//class Person
//{
//public:
//	// 此处后半部分相当于 Phone m_Phone = pName;	隐式转换法
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//
//	}
//	// 姓名
//	string m_Name;
//
//	//手机
//	Phone m_Phone;
//};
//void test01()
//{
//	Person p("张三", "苹果max");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}