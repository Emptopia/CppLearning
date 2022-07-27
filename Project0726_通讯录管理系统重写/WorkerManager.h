#pragma once					//防止头文件重复包含
#include <iostream>		//包含输入输出流头文件
using namespace std;		//使用标准命名空间
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

	//员工人数
	int m_WorkerNum;

	//员工数组指针
	Worker** m_pp_WorkerArray;

	//是否文件为空
	bool FileIsEmpty;

	//保存，写入文件
	void save();

	//获取文件员工数
	int GetNum();

	//初始化，将文件数据全部导入数组
	void InitWorker();

	//显示列表
	void ShowMenu();
	//退出
	void Exit();
	//增加员工
	void AddWorker();
	//显示员工
	void ShowWorker();

	//判断员工存在
	int isExist(int id);
	//删除员工
	void DelWorker();
	
	//修改员工
	void ModWorker();
	//查找员工
	void FindWorker();
	//排序员工
	void SortWorker();
	//清空员工
	void ClearWorker();
	//堆区释放
	~WorkerManager();

};