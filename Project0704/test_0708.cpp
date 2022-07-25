/*
#include <iostream>
using namespace std;
#include <ctime>

int main()
{
*/
	/*循环结构
int num = 0;
while (num <10)
{
	cout << num << endl;
	num++;
}
*/
	/*while案例
//添加随机数种子 利用当前系统时间生成随机数，防止每次随机数都一样
srand((unsigned int)time(NULL));
int num =rand() % 100+1;		//生成1-100的随机数		rand()%100 代表 生成0-100之间，即1-99
//cout << num << endl;
int val = 0;
while (true)
{
	cin >> val;
	if (val > num)
	{
		cout << "猜测过大" << endl;
	}
	else if (val < num)
	{
		cout << "猜测过小" << endl;
	}
	else
	{
		cout << "猜测正确" << endl;
		break;
	}
}*/
	//随机种子

	/*do while
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num <10);
	*/
	/*
	案例：水仙花数
	一个3位数，每个位上的数字的3次幂之和等于它本身
	1^3+5^3+3^3 =153
	用do while 语句找到所有水仙花数
	
	int num = 100;
	do
	{
		int a = num%10;			//个位
		int b = num/10%10;		//十位
		int c = num/100;			//百位
		if ((a*a*a+b * b* b+c * c * c)==num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	*/
	//水仙花数

	/*for循环
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/
	/*for 案例：敲桌子
	个位7，十位7，7的倍数 输出敲桌子
	

	for (int  i = 0; i < 100; i++)
	{
		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0)
		{
			cout << "敲桌子" << i << endl;
		}
	}*/
	/*嵌套循环
	for (int  i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << " *";
		}
		cout << endl;
	}*/
	/*嵌套案例 乘法口诀表
	for (int i = 1; i <=9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= i; j++)
		{
			cout << j<< "*" << i << "=" << j*i << "\t";
		}
		cout << endl;

	}
	*/		
	//乘法口诀

	//break语句三个情况
	/*1、switch语句
	cout << "请选择难度" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	}*/
	/*2、循环语句
	for(int  i=0; i<10;i++)
	{
		if (i == 5)
			break;
		cout << i << endl;
	}*/
	/*3、嵌套循环语句
	for (int i=0;i<10;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << " *";
		}
		cout << endl;
	}*/

	/*continue语句
	for( int i =0; i<=100; i++)
	{
		if (i % 2 == 0)
		{
			continue;	//偶数不输出
		}
		cout << i << endl;
	}
	*/

/*
	system("pause");
	return 0;

}*/