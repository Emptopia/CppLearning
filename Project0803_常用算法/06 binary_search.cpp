#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//binary_search     ����ָ��Ԫ�أ��ҵ��˷���true������false
//�����������޷�ʹ�ã�����Ч�ʸ�
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(2);				//��ʱ���򣬽��δ֪
	bool res = binary_search(v.begin(), v.end(), 9);
	if (res)
	{
		cout << "�ҵ�" << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}