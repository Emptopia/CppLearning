#pragma once
#include <iostream>
using namespace std;
#include <string>

//ְ��������
//���ڲ����κ�ʵ�֣�����Ҫ.cpp
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;


	//��ʾ��λ����
	virtual string getDeptName() = 0;



	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};