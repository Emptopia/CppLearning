#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		this->m_WorkerNum = 0;
		this->m_pp_WorkerArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_WorkerNum = 0;
		this->m_pp_WorkerArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3���ļ����ڣ���ʼ��
	int num = this->GetNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_WorkerNum = num;
	//���ٿռ䣡��
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

//��ʾ�б�
void WorkerManager::ShowMenu()
{
	cout << "******************************************" << endl;
	cout << "******    ��ӭʹ��ְ������ϵͳ!    *******" << endl;
	cout << "**********    0.�˳��������    **********" << endl;
	cout << "**********    1.����ְ����Ϣ    **********" << endl;
	cout << "**********    2.��ʾְ����Ϣ    **********" << endl;
	cout << "**********    3.ɾ��ְ����Ϣ    **********" << endl;
	cout << "**********    4.�޸�ְ����Ϣ    **********" << endl;
	cout << "**********    5.����ְ����Ϣ    **********" << endl;
	cout << "**********    6.���ձ������    **********" << endl;
	cout << "**********    7.��������ĵ�    **********" << endl;
	cout << "******************************************" << endl;
}

//�˳�
void WorkerManager::Exit()
{
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}

//����Ա��
void WorkerManager::AddWorker()
{
	int addNum = 0;
	cout << "��ѡ��Ҫ���ӵ�������" << endl;
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
			cout << "�������" << i+1 << "���˵ı��" << endl;
			cin >> id;
			cout << "�������" << i+1 << "���˵�����" << endl;
			cin >> name;
			cout << "�������" << i+1 << "���˵ĸ�λ" << endl;
			cout << "1��ְ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
		cout << "�ɹ����" << addNum << "����Ա��" << endl;
		this->save();
	}
	else
	{
		cout << "�����������0" << endl;
	}
	system("pause");
	system("cls");

}
//��ʾԱ��
void WorkerManager::ShowWorker()
{
	if (m_pp_WorkerArray != 0)
	{
		for (int i = 0; i < m_WorkerNum; i++)
		{
			cout << "��ţ�" << m_pp_WorkerArray[i]->m_Id
				<< " ������" << m_pp_WorkerArray[i]->m_Name
				<< " ��λ��" << m_pp_WorkerArray[i]->getDName() << endl;
		}
	}
	else
	{
		cout << "�ļ�Ϊ��" << endl;
	}
	system("pause");
	system("cls");
}
//�ж�Ա������
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

//ɾ��Ա��
void WorkerManager::DelWorker()
{
	if (this->FileIsEmpty == true)
	{
		cout << "�ļ������ڻ�Ϊ��" << endl;
	}
	else
	{
		int id = 0;
		cout << "������Ҫɾ����ְ����" << endl;
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
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "���޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}
//�޸�Ա��
void WorkerManager::ModWorker()
{
	if (this->FileIsEmpty == true)
	{
		cout << "�ļ������ڻ�Ϊ��" << endl;
	}
	else
	{
		int id = 0;
		cout << "������Ҫ�޸ĵ�ְ����" << endl;
		cin >> id;
		int index = this->isExist(id);
		if (index != -1)
		{
			delete this->m_pp_WorkerArray[index];
			int newid = 0;
			string newname = "";
			int newdId = 0;
			cout << "�������±��" << endl;
			cin >> newid;
			cout << "������������" << endl;
			cin >> newname;
			cout << "�������¸�λ" << endl;
			cout << "1��ְ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> newdId;
			Worker* p_worker = NULL;
			if (newdId == 1)
				p_worker = new Employee(newid, newname, newdId);
			else if(newdId == 2)
				p_worker = new Manager(newid, newname, newdId);
			else
				p_worker = new Boss(newid, newname, newdId);
			this->m_pp_WorkerArray[index] = p_worker;
			cout << "�޸ĳɹ�" << endl;
			this->save();
		}
		else
		{
			cout << "���޴���" << endl;
		}
	}
	system("pause");
	system("cls");

}
//����Ա��
void WorkerManager::FindWorker()
{
	if(this->FileIsEmpty == true)
	{
		cout << "�ļ������ڻ�Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҷ�ʽ" << endl;
		cout << "1�������" << endl;
		cout << "2��������" << endl;
		int choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			int id = 0;
			cout << "��������" << endl;
			cin >> id;
			int index = this->isExist(id);
			if (index != -1)
			{
				cout << "�ҵ�ְ������Ϣ���£�" << endl;
				this->m_pp_WorkerArray[index]->showInfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (choice == 2)
		{
			cout << "����������" << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_WorkerNum; i++)
			{
				if (m_pp_WorkerArray[i]->m_Name == name)
				{
					cout << "�ҵ�ְ������Ϣ���£�" << endl;
					this->m_pp_WorkerArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "���޴���" << endl;
			}
		}
		else
		{
			cout << "��������" << endl;
		}
	}
	system("pause");
	system("cls");
}
//����Ա��
void WorkerManager::SortWorker()
{
	if (this->FileIsEmpty == true)
	{
		cout << "�ļ������ڻ�Ϊ��" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1���������" << endl;
		cout << "2����Ž���" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_WorkerNum; i++)
		{
			int MinOrMax = i;
			for (int j = i + 1; j < m_WorkerNum; j++)
			{
				if (select == 1)
				{
					//������ƫСֵ
					if (this->m_pp_WorkerArray[MinOrMax] > this->m_pp_WorkerArray[j])
						MinOrMax = j;
				}
				else
				{
					//������ƫ��ֵ
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
		cout << "����ɹ���" << endl;
		this->ShowWorker();
		this->save();
	}
	system("pause");
	system("cls");

}
//���Ա��
void WorkerManager::ClearWorker()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2��ȡ��" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//����ļ�
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
		cout << "����ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	delete[] this->m_pp_WorkerArray;
	this->m_pp_WorkerArray == NULL;
}