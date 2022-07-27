#pragma once					//��ֹͷ�ļ��ظ�����
#include <iostream>		//�������������ͷ�ļ�
using namespace std;		//ʹ�ñ�׼�����ռ�
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>
#define FILENAME "WorkerFile.txt"

class WorkerManager
{
public:
	WorkerManager();

	//Ա������
	int m_WorkerNum;

	//Ա������ָ��
	Worker** m_pp_WorkerArray;

	//�Ƿ��ļ�Ϊ��
	bool FileIsEmpty;

	//���棬д���ļ�
	void save();

	//��ȡ�ļ�Ա����
	int GetNum();

	//��ʼ�������ļ�����ȫ����������
	void InitWorker();

	//��ʾ�б�
	void ShowMenu();
	//�˳�
	void Exit();
	//����Ա��
	void AddWorker();
	//��ʾԱ��
	void ShowWorker();

	//�ж�Ա������
	int isExist(int id);
	//ɾ��Ա��
	void DelWorker();
	
	//�޸�Ա��
	void ModWorker();
	//����Ա��
	void FindWorker();
	//����Ա��
	void SortWorker();
	//���Ա��
	void ClearWorker();
	//�����ͷ�
	~WorkerManager();

};