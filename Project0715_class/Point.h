#pragma once					//防止头文件冲突包含
#include<iostream>
using namespace std;
//点类声明
class Point
{
public:
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
private:
	int m_X;
	int m_Y;
};