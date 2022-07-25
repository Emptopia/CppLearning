#pragma once
#include<iostream>
using namespace std;
#include"Point.h"

class Circle
{
public:
	//设置半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心
	void SetCenter(Point center);
	//获取圆心
	Point getCenter();
private:
	int m_R;
	Point m_Center;		//在类中可以将另一个类作为本类的成员
};