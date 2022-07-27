#include "Boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = dId;
}

void Boss::showInfo()
{
	cout << "员工编号：" << this->m_Id << endl;
	cout << "员工姓名：" << this->m_Name << endl;
	cout << "员工岗位：" << this->getDName() << endl;
}

string Boss::getDName()
{
	string dName = "老板";
	return dName;
}
