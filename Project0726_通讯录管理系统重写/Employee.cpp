#include"Employee.h"

Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = dId;
}

void Employee::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id << endl;
	cout << "Ա��������" << this->m_Name << endl;
	cout << "Ա����λ��" << this->getDName() << endl;
}

string Employee::getDName()
{
	string dName = "ְ��";
	return dName;
}
