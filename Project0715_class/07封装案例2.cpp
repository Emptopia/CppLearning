#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"

//��Բ��ϵ����		
	
//���ֵ����ļ���
//.h���������к����ͳ�Ա����			//Բ��.hҪinclude�����.h
//.cpp���������к�����ʵ��				//Ҫinclude���Ե�.h��������������(Point::������)

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
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void SetCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;		//�����п��Խ���һ������Ϊ����ĳ�Ա
//};

//�жϵ�Բ��ϵ
void isInCircle(Circle& c, Point& p)
{
	//�����������ƽ��
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶ƽ��
	int rDistance = c.getR() * c.getR();
	//�Ƚ�
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;

	}
	else
	{
		cout << "����Բ��" << endl;

	}
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.SetCenter(center);
	//������
	Point p;
	p.setX(10);
	p.setY(11);
	//���Ƚ�
	isInCircle(c, p);


	system("pause");
	return 0;
}