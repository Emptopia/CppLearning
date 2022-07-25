#pragma once					//��ֹͷ�ļ��ظ�����
#include <iostream>		//�������������ͷ�ļ�
using namespace std;		//ʹ�ñ�׼�����ռ�
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILANAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�Ƿ��ļ�Ϊ��
	bool m_FileIsEmpty;

	//����ļ�������
	int get_EmpNum();		//��ȡfile���������Ժ���m_EmpArray�� �ռ俪�� �� ���ݶ���

	//��ʼ��Ա��
	void init_Emp();			//��file��Ϣ����m_EmpArray

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�Ա���Ƿ����
	int isExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();
	
	//��������
	~WorkerManager();
};