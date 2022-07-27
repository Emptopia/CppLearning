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

	//显示信息
	virtual void showInfo() = 0;

	//获取岗位名
	virtual string getDName() = 0;



};