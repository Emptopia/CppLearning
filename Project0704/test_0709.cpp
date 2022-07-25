/*#include<iostream>
using namespace std;

//函数的定义
int add(int num1, int num2)
{
	int num = num1 + num2;
	return num;
}

int main()
{
	cout << add(1, 2) << endl;
	*/



	//goto
	/*
	cout << "1、xxx" << endl;
	cout << "2、xxx" << endl;
	goto FLAG;
	cout << "3、xxx" << endl;
	cout << "4、xxx" << endl;
	FLAG:
	cout << "5、xxx" << endl;
	*/
	//数组
	/*
	int arr[5];
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;
	cout << arr[0] << endl;
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i <5  ; i++)
	{
		cout << arr2[i] << endl;
	}*/
	//数组名用途
	/*
	//统计数组占内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占内存空间为" << sizeof(arr) << endl;		//40
	cout << "每个元素占内存空间为" << sizeof(arr[0]) << endl;		//4
	cout << "数组中元素个数" << sizeof(arr)/sizeof(arr[0]) << endl;		//
	cout << "数组中元素个数" << size(arr) << endl;		//
	//查看数组地址
	cout << "数组首地址为" << (int)arr << endl;		//16进制强转10进制
	cout << "数组中第一个元素的地址为" << (int)&arr[0] << endl;
	cout << "数组中第二个元素的地址为" << (int)&arr[1] << endl;*/
	//数组案例：五只小猪称体重
	/*
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;*/
	//数组案例：数组元素逆置 我的方法
	/*
	int arr[5] = { 1,3,2,5,4 };
	int const arl = size(arr);
	int arr2[arl];
	for (int i = 0; i < arl; i++)
	{
		arr2[i] = arr[arl -1 - i];
		cout << arr2[i] << endl;
	}*/
	//数组案例：数组元素逆置 实际方法
	/*
	int arr[5] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr)/sizeof(arr[0])-1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < size(arr); i++)
	{
		cout << arr[i] << endl;
	}*/
	//冒泡排序(重要)
	/*
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int const arl = size(arr);				//arl=9
	cout << arl << endl;
	for (int j = 0; j <arl-1; j++)		//总排序轮数为 元素个数-1
	{
		for (int i = 0; i < arl - j - 1; i++)		//比较次数=元素个数-当前排序轮数-1
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout << "比较一次结果" << endl;
	for (int i = 0; i < arl; i++)
	{
		cout << arr[i] << " ";
	}*/
	//二维数组
	/*//创建数组1
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	//创建数组2
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//创建数组3 
	int arr3[2][3] = { 1,2,3,4,5,6, };
	//创建数组4
	int arr4[][3] = { 1,2,3,4,5,6 };		//写了3列即每3列一行，自动推算为2行
	//外层循环打印行数//内层循环打印列数
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)	
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}*/
	//二维数组名称的作用
	/*
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "二维数组首地址为：" << (int)arr << endl;
	cout << "二维数组第一行首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;		//相差12
	cout << "二维数组第二行第一个元素首地址为：" << (int)&arr[1][0] << endl;		//取址符
	*/
	//二维数组案例：考试成绩统计
	/*int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j =0; j < 3; j++)		
		{
			sum += score[i][j];
		}
		cout  << names[i] << "的总分是：" << sum << endl;
	}*/



/*
	system("pause");
	return 0;
}*/