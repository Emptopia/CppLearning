#include "Point.h"


void Point::setX(int x)			//表示Point作用域下的setX
{
	m_X = x;
}
int Point::getX()
{
	return m_X;
}
void Point::setY(int y)
{
	m_Y = y;
}
int Point::getY()
{
	return m_Y;
}
