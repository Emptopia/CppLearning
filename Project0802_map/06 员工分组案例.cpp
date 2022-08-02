#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<ctime>
//����
//10��Ա��
//��������������
//key�����ű�ţ�value��Ա��
//Ҫ��ֲ�����ʾԱ����Ϣ

#define CUHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;		//10000 ~ 19999
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int depId = rand() % 3;//0 1 2
		//��Ա�����뵽������
		//key:���ű��    value:Ա��
		m.insert(make_pair(depId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>m)
{
	cout << "�߻�������Ϣ��" << endl;
	multimap<int, Worker>::iterator pos = m.find(0);		//���ҵ��߻����ŵ�һ����
	int count = m.count(0);					//ͳ�Ʋ߻���������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "����������Ϣ��" << endl;
	pos = m.find(1);		//���ҵ��߻����ŵ�һ����
	count = m.count(1);					//ͳ�Ʋ߻���������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "�з�������Ϣ��" << endl;
	pos = m.find(2);		//���ҵ��߻����ŵ�һ����
	count = m.count(2);					//ͳ�Ʋ߻���������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
}


int main()
{
	//�������
	srand((unsigned int)time(NULL));

	//1������Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);
	
	//����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "������" << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	//}

	//2��Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3��������ʾԱ��
	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}