#pragma once
#include<iostream>
using namespace std;
#include"Point.h"

class Circle
{
public:
	//���ð뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void SetCenter(Point center);
	//��ȡԲ��
	Point getCenter();
private:
	int m_R;
	Point m_Center;		//�����п��Խ���һ������Ϊ����ĳ�Ա
};