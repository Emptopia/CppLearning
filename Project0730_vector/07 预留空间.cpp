#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	//�������ڴ棬������û�г�ʼ��
	vector<int> v1;
	//����reverseԤ���ռ�
	v1.reserve(100000);

	int num = 0;   //ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "num = " << num << endl;				//����30��Σ�����

	




}


int main()
{
	test01();
	system("pause");
	return 0;
}