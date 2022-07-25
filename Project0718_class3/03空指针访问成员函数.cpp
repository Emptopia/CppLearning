//#include<iostream>
//using namespace std;
//
////空指针可以调用成员函数
//
//class Person
//{
//public :
//	void showClassName()
//	{
//		cout << "this is Person class " << endl;
//	}
//
//	void showPersonAge()
//	{
//		//报错原因为传入指针为NULL
//		if (this == NULL)
//		{
//			return;															//提高代码稳定性
//		}
//		cout << "age = " << m_Age << endl;			//此时调用 this -> m_Age
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();					//正常调用
//	p->showPersonAge();				//this是空指针，读取访问权限冲突
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}