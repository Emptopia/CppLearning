#include<iostream>
using namespace std;

//���μ̳У�����������̳�ͬһ�����࣬ĳ����ͬʱ�̳�����������

class Animal 
{
public:

	int m_Age;
};
//������̳�  ���Խ�����μ̳е�����
//Animal��  ��֮Ϊ  �����
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
	//st.m_Age = 10;				��������ȷ
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	//��ʱ�����ظ��˷�
	//���������з�����8�ֽڣ�����m_Age

	//��̳к�ֻ��һ������
	st.m_Age = 18;
	cout << "st.m_Age = " << st.m_Age << endl;		//��ʱ������

	//���������з�����12�ֽ�
	// ����vbptr		vitual base pointer �����ָ��					4+4byte
	// ��¼��ƫ���� ->vbtable virtual base table �����		4byte	
	// ָ�������	virtual base Animal

}

int main()
{
	test01();


	system("pause");
	return 0;
}