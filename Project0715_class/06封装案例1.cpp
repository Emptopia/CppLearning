//#include<iostream>
//using namespace std;
//
//class Cube
//{
//public:
//	void setL(int l)			//���ó�
//	{
//		m_L = l;
//	}
//	int getL()					//��ȡ��
//	{
//		return m_L;
//	}
//	void setW(int w)		//���ÿ�
//	{
//		m_W = w;
//	}
//	int getW()				//��ȡ��
//	{
//		return m_W;
//	}
//	void setH(int h)		//���ø�
//	{
//		m_H = h;
//	}
//	int getH()					//��ȡ��
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
//	//���ó�Ա�����ж����
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
//	int m_L;		//��
//	int m_W;		//��
//	int m_H;		//��
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
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1��c2���" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�����" << endl;
//
//	}
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2)
//	{
//		cout << "c1��c2���" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�����" << endl;
//
//	}
//
//
//
//	system("pause");
//	return 0;
//}