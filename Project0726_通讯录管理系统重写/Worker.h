#pragma once
#include <iostream>
using namespace std;
#include <string>

class Worker
{
public:
	int m_Id;
	string m_Name;
	int m_DId;

	//��ʾ��Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ��
	virtual string getDName() = 0;



};