#pragma once
#include <iostream>
using namespace std;
#include "worker.h"


//普通员工
class Employee : public Worker
{
public:
	//构造函数
	Employee(int id, string name, int dId);




	//显示个人信息
	virtual void showInfo();
	//显示岗位名称
	virtual string getDeptName();




};