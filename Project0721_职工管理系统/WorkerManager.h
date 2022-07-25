#pragma once					//防止头文件重复包含
#include <iostream>		//包含输入输出流头文件
using namespace std;		//使用标准命名空间
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILANAME "empFile.txt"

class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	//展示菜单
	void Show_Menu();
	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//是否文件为空
	bool m_FileIsEmpty;

	//获得文件中人数
	int get_EmpNum();		//读取file人数，用以后续m_EmpArray的 空间开辟 和 数据读入

	//初始化员工
	void init_Emp();			//将file信息读入m_EmpArray

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断员工是否存在
	int isExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();
	
	//析构函数
	~WorkerManager();
};