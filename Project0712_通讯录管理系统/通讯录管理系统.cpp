//1、封装函数界面shouMenu
	//在main函数中调用封装函数

#include<iostream>
using namespace std;
#define MAX 1000			//宏常量，以便后期维护

//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

struct Person
{
	string m_Name;
	int m_sex;			//1男2女
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};

//添加联系人
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加联系人
		string name;
		int sex;
		int age;
		string phone;
		string address;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			cout << "输入有误，重新输入！" << endl;
		}
		cout << "请输入年龄： " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "请输入家庭住址：" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;
		system("pause");			//请按任意键继续
		system("cls");				//清屏
	}
}

//显示联系人
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测待删除联系人是否存在
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;		//找到返回这个人所在数组下标编号
		}
	}
	return -1;			//没找到返回-1
}

//删除联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);		//返回删除人员数组下标
	if (ret != -1)				//找到删除对象
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];		//数据前移
		}
		abs->m_Size--;			//更新通讯录人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入要查找的联系人：" << endl;;
	string name;
	cin >> name;
	//判断联系人是否存在
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_sex << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "地址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入要修改的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "请输入住址：" << endl;
		int address = 0;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功" << endl;

	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//清空联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录人员个数
	abs.m_Size = 0;
	//创建一个用户选择输入的变量
	int select = 0;
	//循环
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:		//1、添加联系人
			addPerson(&abs);
			break;
		case 2:		//2、显示联系人
			showPerson(&abs);
			break;
		case 3:		//3、删除联系人
		{
			//cout << "请输入删除联系人姓名：" << endl;
			//string name;
			//cin >> name;
			//if (isExist(&abs, name) == -1)
			//{
			//	cout << "差无此人" << endl;
			//}
			//else
			//	cout << "找到此人" << endl;
			deletePerson(&abs);
		}
			break;
		case 4:		//4、查找联系人
			findPerson(&abs);
			break;
		case 5:		//5、修改联系人
			modifyPerson(&abs);
			break;
		case 6:		//6、清空联系人
			cleanPerson(&abs);
			break;
		case 0:		//0、退出通讯录
			cout << "欢迎下次使用" << endl;
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