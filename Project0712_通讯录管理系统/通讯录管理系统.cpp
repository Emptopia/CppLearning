//1����װ��������shouMenu
	//��main�����е��÷�װ����

#include<iostream>
using namespace std;
#define MAX 1000			//�곣�����Ա����ά��

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

struct Person
{
	string m_Name;
	int m_sex;			//1��2Ů
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};

//�����ϵ��
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		string name;
		int sex;
		int age;
		string phone;
		string address;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			cout << "���������������룡" << endl;
		}
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "�������ͥסַ��" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");			//�밴���������
		system("cls");				//����
	}
}

//��ʾ��ϵ��
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ɾ����ϵ���Ƿ����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;		//�ҵ�������������������±���
		}
	}
	return -1;			//û�ҵ�����-1
}

//ɾ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);		//����ɾ����Ա�����±�
	if (ret != -1)				//�ҵ�ɾ������
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];		//����ǰ��
		}
		abs->m_Size--;			//����ͨѶ¼��Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;;
	string name;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "������סַ��" << endl;
		int address = 0;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼��Ա����
	abs.m_Size = 0;
	//����һ���û�ѡ������ı���
	int select = 0;
	//ѭ��
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:		//1�������ϵ��
			addPerson(&abs);
			break;
		case 2:		//2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:		//3��ɾ����ϵ��
		{
			//cout << "������ɾ����ϵ��������" << endl;
			//string name;
			//cin >> name;
			//if (isExist(&abs, name) == -1)
			//{
			//	cout << "���޴���" << endl;
			//}
			//else
			//	cout << "�ҵ�����" << endl;
			deletePerson(&abs);
		}
			break;
		case 4:		//4��������ϵ��
			findPerson(&abs);
			break;
		case 5:		//5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:		//6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0:		//0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	

	system("pause");
	return 0;
}