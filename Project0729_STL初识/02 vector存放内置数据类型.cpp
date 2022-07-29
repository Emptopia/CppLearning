#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//vector�������������������

void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//������һ��vector����
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	////ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();			//��ʼ������		ָ��������һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();					//����������		ָ���������һ��Ԫ�ص���һ��λ��

	////��һ�ֱ���
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	////�ڶ��ֱ���				��������ĺϲ�
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//�����ֱ���			����stl���ṩ�ı����㷨for_each()			Ҫ����algorithm
	for_each(v.begin(), v.end(), myPrint);			//������д������

	//�ײ�
	//_Fn for_each(_InIt _First, _InIt _Last, _Fn _Func) { // perform function for each element [_First, _Last)
	//	_Adl_verify_range(_First, _Last);
	//	auto _UFirst = _Get_unwrapped(_First);
	//	const auto _ULast = _Get_unwrapped(_Last);
	//	for (; _UFirst != _ULast; ++_UFirst) {
	//		_Func(*_UFirst);
	//	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}