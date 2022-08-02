#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<ctime>
//需求：
//10个员工
//姓名，三个部门
//key：部门编号，value：员工
//要求分部门显示员工信息

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
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;		//10000 ~ 19999
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int depId = rand() % 3;//0 1 2
		//将员工插入到分组中
		//key:部门编号    value:员工
		m.insert(make_pair(depId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>m)
{
	cout << "策划部门信息：" << endl;
	multimap<int, Worker>::iterator pos = m.find(0);		//查找到策划部门第一个人
	int count = m.count(0);					//统计策划部门人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "美术部门信息：" << endl;
	pos = m.find(1);		//查找到策划部门第一个人
	count = m.count(1);					//统计策划部门人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "研发部门信息：" << endl;
	pos = m.find(2);		//查找到策划部门第一个人
	count = m.count(2);					//统计策划部门人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
}


int main()
{
	//随机种子
	srand((unsigned int)time(NULL));

	//1、创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);
	
	//测试
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "姓名：" << it->m_Name << " 工资：" << it->m_Salary << endl;
	//}

	//2、员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3、分组显示员工
	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}