//#include<iostream>
//using namespace std;
//
////��̬�ŵ�
////1��������֯�ṹ����
////2���ɶ���ǿ
////3������ǰ�ںͺ��ڵ���չ�Լ�ά��
//
////��ͨд��
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
//	//�����Ҫ��չ�µĹ��ܣ���Ҫ�޸�Դ��
//	//��ʵ����ʱ���ᳫ����ԭ��
//
//	int m_Num1;
//	int m_Num2;
//};
//
////���ö�̬ʵ��
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
//	AbstractCalculator* abc = new AddCalculator;			//����ָ��ָ��������󣬷�����̬	
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;			//�����ǵ������ͷ�
//
//	abc = new SubCalculator;											//���ͻ���ָ�룬��ֱ����
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;			//�����ǵ������ͷ�
//
//
//	abc = new MulCalculator;											//���ͻ���ָ�룬��ֱ����
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;			//�����ǵ������ͷ�
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
