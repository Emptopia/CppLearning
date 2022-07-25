//#include<iostream>
//using namespace std;
//
////1、公共继承
////继承公共和保护
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;		//父类公共->		子类公共	
//		m_B = 10;		//父类保护->		子类保护
//		//m_C = 10;		//父类私有->		不可继承
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;				//公共
//	//s1.m_B = 100;			//保护		不可访问
//}
//
////2、保护继承
////继承公共和保护，并且二者都变成保护权限
//class Son2 :protected Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;		//父类公共->		子类保护	
//		m_B = 10;		//父类保护->		子类保护
//		//m_C = 10;		//父类私有->		不可继承
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;			//保护		不可访问
//	//s2.m_B = 100;			//保护		不可访问
//}
//
////3、私有继承
////继承公共和保护，并且二者都变成私有权限
//class Son3 :private Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;		//父类公共->		子类私有	
//		m_B = 10;		//父类保护->		子类私有
//		//m_C = 10;		//父类私有->		不可继承
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 100;			//私有		不可访问
//	//s3.m_B = 100;			//私有		不可访问
//}
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 100;			//私有		本科访问
//		//m_B = 100;			//私有		本科访问
//
//	}
//};
//
//
//
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}