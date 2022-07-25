//#include<iostream>
//using namespace std;
//
//class Cube
//{
//public:
//	void setL(int l)			//设置长
//	{
//		m_L = l;
//	}
//	int getL()					//获取长
//	{
//		return m_L;
//	}
//	void setW(int w)		//设置宽
//	{
//		m_W = w;
//	}
//	int getW()				//获取长
//	{
//		return m_W;
//	}
//	void setH(int h)		//设置高
//	{
//		m_H = h;
//	}
//	int getH()					//获取高
//	{
//		return m_H;
//	}
//	int calculateS()
//	{
//		return (2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H);
//	}
//	int calculateV()
//	{
//		return (m_L * m_H * m_W);
//	}
//	//利用成员函数判断相等
//	bool isSameByClass(Cube& c)
//	{
//		if (getL() == c.getL() && getW() == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//
//	}
//
//private:
//	int m_L;		//长
//	int m_W;		//宽
//	int m_H;		//高
//};
//
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1和c2相等" << endl;
//	}
//	else
//	{
//		cout << "c1和c2不相等" << endl;
//
//	}
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2)
//	{
//		cout << "c1和c2相等" << endl;
//	}
//	else
//	{
//		cout << "c1和c2不相等" << endl;
//
//	}
//
//
//
//	system("pause");
//	return 0;
//}