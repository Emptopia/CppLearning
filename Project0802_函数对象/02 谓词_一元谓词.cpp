#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//����
	//����bool���͵ķº�����Ϊν��
	//���operator()����һ����������ô����һԪν��
	//���operator()����������������ô������Ԫν��

//һԪν��
class CreateFive
{
public:
	bool operator ()(int val)
	{
		return val > 5;			//��ֵ����5�����棬����Ϊ��
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//���������У���û�д���5������
	//CreateFive()������������
	//find_if			����������
	vector<int>::iterator it = find_if(v.begin(), v.end(), CreateFive());									//������_Pred����ν��		predicate
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��˴���5������Ϊ��" << *it << endl; 
	}

}


int main()
{
	test01();
	system("pause");
	return 0;
}