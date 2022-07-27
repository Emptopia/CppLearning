#pragma once
#include"Worker.h"
#include<iostream>
using namespace std;

class Manager :public Worker
{
public:
	Manager(int id, string name, int dId);

	virtual void showInfo();

	virtual string getDName();

};