//#include<iostream>
//using namespace std;
//
////多态优点
////1、代码组织结构清晰
////2、可读性强
////3、利用前期和后期的扩展以及维护
//
////普通写法
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//	//如果需要扩展新的功能，需要修改源码
//	//真实开发时，提倡开闭原则
//
//	int m_Num1;
//	int m_Num2;
//};
//
////利用多态实现
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class SubCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//class MulCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//
//}
//
//void test02()
//{
//	AbstractCalculator* abc = new AddCalculator;			//父类指针指向子类对象，发生多态	
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;			//堆区记得主动释放
//
//	abc = new SubCalculator;											//类型还是指针，可直接用
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;			//堆区记得主动释放
//
//
//	abc = new MulCalculator;											//类型还是指针，可直接用
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;			//堆区记得主动释放
//
//
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
