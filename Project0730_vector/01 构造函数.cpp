#include<iostream>
using namespace std;
#include<vector>
//vector���Զ�̬��չ�����Ҹ�����ڴ�ռ䣬����ԭ���ݣ��ͷ�ԭ�ռ�
//vector������֧���������

//���캯��

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//1��Ĭ�Ϲ���
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//2�����乹��			���������
	vector<int>v2(v1.begin(), v1.end());			//��ȡ��	[begin,end)	����������
	printVector(v2);

	//3��n��elem�ķ�ʽ����
	vector<int>v3(10, 100);				//10��100
	printVector(v3);

	//4����������				//����
	vector<int>v4(v3);
	printVector(v4);
}



int main()
{
	test01();

	system("pause");
	return 0;
}