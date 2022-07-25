//#include<iostream>
//using namespace std;
//
////私有的好处
//		//1、可以自己控制读写的权限
//		//2、对于写可以检测数据的有效性
//
//class Person
//{
//public:
//	//写姓名		设置
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//读姓名		获取
//	string getName()
//	{
//		m_Age = 0;			//初始化为0
//		return m_Name;
//	}
//	//读年龄
//	int getAge()
//	{
//		return m_Age;
//	}
//	//写情人
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//
//private:
//	string m_Name;		//姓名，可读可写
//	int m_Age;				//年龄，只读
//	string m_Lover;		//情人，只写
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名为：" << p.getName() << endl;
//	cout << "年龄为：" << p.getAge() << endl;
//	p.setLover("小红");
//	//cout << "情人为：" << p.Lover << endl;			
//	system("pause");
//	return 0;
//}