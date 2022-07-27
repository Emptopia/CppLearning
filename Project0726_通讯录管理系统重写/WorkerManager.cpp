#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->m_WorkerNum = 0;
		this->m_pp_WorkerArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->m_WorkerNum = 0;
		this->m_pp_WorkerArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3、文件存在，初始化
	int num = this->GetNum();
	cout << "职工人数为：" << num << endl;
	this->m_WorkerNum = num;
	//开辟空间！！
	this->m_pp_WorkerArray = new Worker * [this->m_WorkerNum];
	this->InitWorker();
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < m_WorkerNum; i++)
	{
		ofs << this->m_pp_WorkerArray[i]->m_Id << " "
			<< this->m_pp_WorkerArray[i]->m_Name << " "
			<< this->m_pp_WorkerArray[i]->m_DId << endl;
	}
	ofs.close();
}

int WorkerManager::GetNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

void WorkerManager::InitWorker()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* p_worker = NULL;
		if (dId == 1)
			p_worker = new Employee(id, name, dId);
		else if (dId == 2)
			p_worker = new Manager(id, name, dId);
		else
			p_worker = new Boss(id, name, dId);
		this->m_pp_WorkerArray[index] = p_worker;
		index++;
	}
	ifs.close();
}

//显示列表
void WorkerManager::ShowMenu()
{
	cout << "******************************************" << endl;
	cout << "******    欢迎使用职工管理系统!    *******" << endl;
	cout << "**********    0.退出管理程序    **********" << endl;
	cout << "**********    1.增加职工信息    **********" << endl;
	cout << "**********    2.显示职工信息    **********" << endl;
	cout << "**********    3.删除职工信息    **********" << endl;
	cout << "**********    4.修改职工信息    **********" << endl;
	cout << "**********    5.查找职工信息    **********" << endl;
	cout << "**********    6.按照编号排序    **********" << endl;
	cout << "**********    7.清空所有文档    **********" << endl;
	cout << "******************************************" << endl;
}

//退出
void WorkerManager::Exit()
{
	cout << "欢迎下次使用" << endl;
	exit(0);
}

//增加员工
void WorkerManager::AddWorker()
{
	int addNum = 0;
	cout << "请选择要增加的人数：" << endl;
	cin >> addNum;
	if (addNum > 0)
	{
		int newSize = this->m_WorkerNum + addNum;
		Worker** pp_newArray = new Worker * [newSize];
		if (this->m_pp_WorkerArray != NULL)
		{
			for (int i = 0; i < m_WorkerNum; i++)
			{
				pp_newArray[i] = m_pp_WorkerArray[i];
			}
		}
		int id;
		string name;
		int dId;
		for (int i = 0; i < addNum; i++)
		{
			cout << "请输入第" << i+1 << "个人的编号" << endl;
			cin >> id;
			cout << "请输入第" << i+1 << "个人的姓名" << endl;
			cin >> name;
			cout << "请输入第" << i+1 << "个人的岗位" << endl;
			cout << "1、职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dId;
			Worker* p_worker = NULL;
			switch (dId)
			{
			case 1:
				p_worker = new Employee(id, name, dId);
				break;
			case 2:
				p_worker = new Manager(id, name, dId);
				break;
			case 3:
				p_worker = new Boss(id, name, dId);
				break;
			default:
				break;
			}
			pp_newArray[this->m_WorkerNum + i] = p_worker;
		}
		delete[] m_pp_WorkerArray;
		this->m_pp_WorkerArray = pp_newArray;
		this->m_WorkerNum = newSize;
		cout << "成功添加" << addNum << "名新员工" << endl;
		this->save();
	}
	else
	{
		cout << "人数必须大于0" << endl;
	}
	system("pause");
	system("cls");

}
//显示员工
void WorkerManager::ShowWorker()
{
	if (m_pp_WorkerArray != 0)
	{
		for (int i = 0; i < m_WorkerNum; i++)
		{
			cout << "编号：" << m_pp_WorkerArray[i]->m_Id
				<< " 姓名：" << m_pp_WorkerArray[i]->m_Name
				<< " 岗位：" << m_pp_WorkerArray[i]->getDName() << endl;
		}
	}
	else
	{
		cout << "文件为空" << endl;
	}
	system("pause");
	system("cls");
}
//判断员工存在
int WorkerManager::isExist(int id)
{
	int index = -1;
	for (int i = 0; i < m_WorkerNum; i++)
	{
		if (this->m_pp_WorkerArray[i]->m_Id == id)
		{
			index = i;
		}
	}
	return index;
}

//删除员工
void WorkerManager::DelWorker()
{
	if (this->FileIsEmpty == true)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入要删除的职工号" << endl;
		cin >> id;
		int index = this->isExist(id);
		if (index != -1)
		{
			for (int i = 0; i < m_WorkerNum - 1; i++)
			{
				this->m_pp_WorkerArray[i] = this->m_pp_WorkerArray[i + 1];
			}
			this->m_WorkerNum--;
			this->save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}
//修改员工
void WorkerManager::ModWorker()
{
	if (this->FileIsEmpty == true)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入要修改的职工号" << endl;
		cin >> id;
		int index = this->isExist(id);
		if (index != -1)
		{
			delete this->m_pp_WorkerArray[index];
			int newid = 0;
			string newname = "";
			int newdId = 0;
			cout << "请输入新编号" << endl;
			cin >> newid;
			cout << "请输入新姓名" << endl;
			cin >> newname;
			cout << "请输入新岗位" << endl;
			cout << "1、职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> newdId;
			Worker* p_worker = NULL;
			if (newdId == 1)
				p_worker = new Employee(newid, newname, newdId);
			else if(newdId == 2)
				p_worker = new Manager(newid, newname, newdId);
			else
				p_worker = new Boss(newid, newname, newdId);
			this->m_pp_WorkerArray[index] = p_worker;
			cout << "修改成功" << endl;
			this->save();
		}
		else
		{
			cout << "查无此人" << endl;
		}
	}
	system("pause");
	system("cls");

}
//查找员工
void WorkerManager::FindWorker()
{
	if(this->FileIsEmpty == true)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		cout << "请输入查找方式" << endl;
		cout << "1、按编号" << endl;
		cout << "2、按姓名" << endl;
		int choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			int id = 0;
			cout << "请输入编号" << endl;
			cin >> id;
			int index = this->isExist(id);
			if (index != -1)
			{
				cout << "找到职工，信息如下：" << endl;
				this->m_pp_WorkerArray[index]->showInfo();
			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else if (choice == 2)
		{
			cout << "请输入姓名" << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_WorkerNum; i++)
			{
				if (m_pp_WorkerArray[i]->m_Name == name)
				{
					cout << "找到职工，信息如下：" << endl;
					this->m_pp_WorkerArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "查无此人" << endl;
			}
		}
		else
		{
			cout << "输入有误" << endl;
		}
	}
	system("pause");
	system("cls");
}
//排序员工
void WorkerManager::SortWorker()
{
	if (this->FileIsEmpty == true)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1、编号升序" << endl;
		cout << "2、编号降序" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_WorkerNum; i++)
		{
			int MinOrMax = i;
			for (int j = i + 1; j < m_WorkerNum; j++)
			{
				if (select == 1)
				{
					//升序，找偏小值
					if (this->m_pp_WorkerArray[MinOrMax] > this->m_pp_WorkerArray[j])
						MinOrMax = j;
				}
				else
				{
					//降序，找偏大值
					if (this->m_pp_WorkerArray[MinOrMax] < this->m_pp_WorkerArray[j])
						MinOrMax = j;
				}
				if (i != MinOrMax)
				{
					Worker* temp = this->m_pp_WorkerArray[i];
					this->m_pp_WorkerArray[i] = this->m_pp_WorkerArray[MinOrMax];
					this->m_pp_WorkerArray[MinOrMax] = temp;
				}
			}
		}
		cout << "排序成功！" << endl;
		this->ShowWorker();
		this->save();
	}
	system("pause");
	system("cls");

}
//清空员工
void WorkerManager::ClearWorker()
{
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、取消" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//清空文件
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);
		ofs.close();
		if (m_pp_WorkerArray != NULL)
		{
			for (int i = 0; i < m_WorkerNum; i++)
			{
				delete this->m_pp_WorkerArray[i];
				this->m_pp_WorkerArray[i] = NULL;
			}
			delete[] this->m_pp_WorkerArray;
			this->m_pp_WorkerArray = NULL;
			this->m_WorkerNum = 0;
			this->FileIsEmpty = true;
		}
		cout << "清楚成功" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	delete[] this->m_pp_WorkerArray;
	this->m_pp_WorkerArray == NULL;
}