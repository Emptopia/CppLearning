#include<iostream>
using namespace std;
#include "WorkerManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	WorkerManager wm;
	int choice = -1;
	while (true)
	{
		wm.ShowMenu();
		cout << "������ѡ��" << endl;
		cin >> choice;
		cin.clear();
		cin.ignore();

		switch (choice)
		{
		case 0:				//�˳�
			wm.Exit();
			break;
		case 1:				//����
			wm.AddWorker();
			break;
		case 2:				//��ʾ
			wm.ShowWorker();
			break;
		case 3:				//ɾ��
			wm.DelWorker();
			break;
		case 4:				//�޸�
			wm.ModWorker();
			break;
		case 5:				//����
			wm.FindWorker();
			break;
		case 6:				//����
			wm.SortWorker();
			break;
		case 7:				//���
			wm.ClearWorker();
			break;
		default:
			cout << "�����������������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}


	system("pause");
	return 0;
}