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
		cout << "请输入选择：" << endl;
		cin >> choice;
		cin.clear();
		cin.ignore();

		switch (choice)
		{
		case 0:				//退出
			wm.Exit();
			break;
		case 1:				//增加
			wm.AddWorker();
			break;
		case 2:				//显示
			wm.ShowWorker();
			break;
		case 3:				//删除
			wm.DelWorker();
			break;
		case 4:				//修改
			wm.ModWorker();
			break;
		case 5:				//查找
			wm.FindWorker();
			break;
		case 6:				//排序
			wm.SortWorker();
			break;
		case 7:				//清空
			wm.ClearWorker();
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}


	system("pause");
	return 0;
}