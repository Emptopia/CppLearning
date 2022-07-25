#include<iostream>
using namespace std;

//菱形继承：两个派生类继承同一个基类，某个类同时继承两个派生类

class Animal 
{
public:

	int m_Age;
};
//利用虚继承  可以解决菱形继承的问题
//Animal类  称之为  虚基类
class Sheep : virtual public Animal
{

};
class Tuo : virtual public Animal
{

};

class SheepTuo : public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;
	//st.m_Age = 10;				报错，不明确
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	//此时数据重复浪费
	//开发工具中发现有8字节，两份m_Age

	//虚继承后只有一份数据
	st.m_Age = 18;
	cout << "st.m_Age = " << st.m_Age << endl;		//此时不报错

	//开发工具中发现有12字节
	// 两份vbptr		vitual base pointer 虚基类指针					4+4byte
	// 记录了偏移量 ->vbtable virtual base table 虚基类		4byte	
	// 指向虚基类	virtual base Animal

}

int main()
{
	test01();


	system("pause");
	return 0;
}