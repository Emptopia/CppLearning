#include "Boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = dId;
}

void Boss::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id << endl;
	cout << "Ա��������" << this->m_Name << endl;
	cout << "Ա����λ��" << this->getDName() << endl;
}

string Boss::getDName()
{
	string dName = "�ϰ�";
	return dName;
}
