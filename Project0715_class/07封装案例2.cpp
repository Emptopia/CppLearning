#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"

//点圆关系案例		
	
//划分到子文件中
//.h中留下所有函数和成员声明			//圆类.h要include点类的.h
//.cpp中留下所有函数的实现				//要include各自的.h，并标明作用域(Point::函数名)

//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void SetCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;		//在类中可以将另一个类作为本类的成员
//};

//判断点圆关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点距离平方
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径平方
	int rDistance = c.getR() * c.getR();
	//比较
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;

	}
	else
	{
		cout << "点在圆内" << endl;

	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.SetCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(11);
	//并比较
	isInCircle(c, p);


	system("pause");
	return 0;
}