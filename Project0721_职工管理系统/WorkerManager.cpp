#include <iostream>		//�������������ͷ�ļ�
using namespace std;		//ʹ�ñ�׼�����ռ�
#include "WorkerManager.h"



WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILANAME, ios::in);			//���ļ�
	//1���ļ����������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;					//����ֹͣ
	}
	//2���ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())			//�ļ���.eof()		���ifs�Ѿ�>>��ĩβ		����Ϊtrue
	{
		//�ļ�Ϊ��
		cout << "�ļ�Ϊ��" << endl;
		//��ʼ��
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;					//����ֹͣ
	}
	//3���ļ����ڣ�����¼����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;
	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݴ浽������
	this->init_Emp();
	//����
	//for (int i = 0; i < m_EmpNum; i++)
	//{
	//	cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
	//		<< "������" << this->m_EmpArray[i]->m_Name
	//		<< "���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILANAME, ios::in);				//�򿪣���
	int id;
	string name;
	int dId;

	int num = 0;
	//�����ݵ�ͬʱ����
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}


void WorkerManager::Show_Menu()
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

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);				//�˳�����
}

void WorkerManager::Add_Emp()
{
	cout << "���������ְ��������" << endl;
	//�����û���������
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//���
		//��������µĿռ��С
		int newSize = this->m_EmpNum + addNum;			//�¿ռ�����=ԭ����¼����+��������
		//�����¿ռ�
		Worker** newSpace = new Worker* [newSize];

		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "����ְ���ı�ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ����������" << endl;
			cin >> name;
			cout << "��ѡ���ְ���ĸ�λ" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//��������ְ��ָ�뱣����������
			newSpace[this->m_EmpNum + i] = worker;
		}
		//�ͷ�ԭ�ж����ռ�
		delete[] this->m_EmpArray;
		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;
		//�����µ�ְ������
		this->m_EmpNum = newSize;
		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;
		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
		//�������ݵ��ļ���
		this->save();
	}
	else
	{
		cout << "�������� " << endl;
	}
	//����������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");

}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILANAME, ios::out);			//д�ļ���ʽ��

	//д��ÿ���˵�����
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILANAME, ios::in);
	
	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)				//��ְͨ��
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();

}

void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�������" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		//��ְ�����ɾ��
		cout << "������Ҫɾ����ְ�����;" << endl;
		int id = 0;
		cin >> id;
		int index = this->isExist(id);
		if (index != -1)		//˵��ְ�����ڣ�����Ҫɾ����indexλ���ϵ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;		//���������м�¼��Ա����
			//ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}

	
	}
	system("pause");
	system("cls");
}

//�ж�Ա���Ƿ���ڣ������򷵻���������λ�ã������ڷ���-1
int WorkerManager::isExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}
	}
	return index;
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı��" << endl;
		int id;
		cin >> id;

		int ret = this->isExist(id);
		if (ret != -1)
		{
			//���ҵ����ְ��
			delete this->m_EmpArray[ret];			//ɾ���ϳ�Ա���ͷŸɾ�
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽" << id << "��ְ������������ְ����" << endl;
			cin >> newId;
			cout << "��������������" << endl;
			cin >> newName;
			cout << "�������λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;

			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}
			//�������� ��������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ���" << endl;
			//���浽�ļ���
			this->save();

		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ" << endl;
		cout << "1������ְ����Ų��� " << endl;
		cout << "2������ְ������������" << endl;
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//���ձ�Ų�
			int id;
			cout << "��������ҵ�ְ�����" << endl;
			cin >> id;
			int ret = isExist(id);
			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (select == 2)
		{
			//��������
			string name;
			cout << "��������ҵ�ְ������" << endl;
			cin >> name;
			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;		//Ĭ��δ�ҵ�ְ��

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��" << this->m_EmpArray[i]->m_Id << "�ţ�ְ����Ϣ����" << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
					//�˴���break��Ϊ�˲���������
				}
			}
			if (flag == false)
			{
				cout << "���޴���" << endl;
			}
			system("pause");
			system("cls");

		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1����ְ���Ž������� " << endl;
		cout << "2����ְ���Ž��н��� " << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;		//������Сֵ�����ֵ���±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}

		}
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();			//�����Ľ�����浽�ļ���
		this->Show_Emp();			//չʾ����ְ��

		//�ж�һ��ʼ�϶�����Сֵ�����ֵ�ǲ�����ʵ�ģ�������ǣ��򽻻�
	}
}

void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILANAME, ios::trunc);		//ɾ���ļ������´���
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	delete[] this->m_EmpArray;
	this->m_EmpArray = NULL;				//�����ֶ��ͷ�
}