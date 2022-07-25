/*#include<iostream>
using namespace std;

void swap01(int a, int b)
{
	int  temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

void swap02(int* p1, int* p2)
{
	int  temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bubbleSort(int* arr, int len)		//参数1：数组首地址		参数2：数组长度
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j<j+1的值，交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arr, int len)			//传入的数组首地址也可以
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<endl;				//传入的数组首地址，也可以直接拿来访问成员的值
	}
}

struct student
{
	//一些类型集合组成的一个类型
	string name;
	int age;
	int score;
}s3;	//创建结构体变量3（顺便创建）

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

struct Student
{
	string sName;
	int score;
};

struct Teacher
{
	string tName;
	Student sArray[5];
};

void printStudent1(struct student s)			//值传递
{
	s.age = 100;
	cout << "子函数1中：" << s.name << s.age << s.score << endl;
}

void printStudent2(struct student* p)			//地址传递
{
	p->age = 100;
	cout << "子函数2中：" << p->name << p->age << p->score << endl;
}

void printStudent(const student s)
{
	//s.age = 150;		//无法修改啦
	cout << s.name << s.age << s.score << endl;
}

void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];			//string的类数组用法
		//通过循环给每名老师所带的学生来赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName = nameSeed[j];
			int random = rand() % 61 +40;		//40~100的随机数    
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
				" 考试分数：" << tArray[i].sArray[j].score << endl;

		}
	}
}

int main()
{
*/

	//指针和数组
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* p = arr;		//数组首地址
	cout << "利用指针访问第一个元素：" << *p << endl;
	p++;					//让指针向后偏移4(32)/8(64)个字节
	cout << "利用指针访问第二个元素：" << *p << endl;
	cout << "利用指针遍历数组" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		//cout << arr[i] << endl;
		cout << *p2 << endl;				//可以合并成*p2++
		p2++;
	}*/
	//指针和函数
	/*//1、值传递		//实参不变
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//2、地址传递	//可以修饰实参
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/
	//指针、数组、函数		//冒泡排序2
	/*//案例：封装一个函数，利用冒泡排序，实现对整形数组的升序排列
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);		//数组长度sizeof(arr)/sizeof(arr[0])
	bubbleSort(arr, len);
	printArray(arr, len);*/
	//结构体
	/*//创建结构体变量1				//struct 可以省略
	struct student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	//创建结构体变量2				//创建时给成员赋值
	struct student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
	//创建结构体变量3				//构建结构体时创建（一般不用）
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;*/
	//结构体数组
	/*struct student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};
	//赋值
	stuArray[2].name = "赵六";
	//遍历
	for (int i = 0; i < 3; i++)
	{
		cout << stuArray[i].name << stuArray[i].age << stuArray[i].score << endl;
	}*/
	//结构体指针
	/*//1、创建结构体变量
	student s = { "张三",18,100 };
	//2、通过指针指向结构体变量
	student* p = &s;
	//3、通过指针访问结构体变量中的数据		//p->name/(*p).name
	cout << p->name << p->age << (*p).score << endl;*/
	//结构体嵌套结构体
	/*teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "老师的信息：" << t.id << t.name << t.age << endl;
	cout << "老师学生的属性：" << t.stu.name << t.stu.age << t.stu.score << endl;*/
	//结构体做函数参数
	/*//不想修改主函数的数据，用值传递，反之用地址传递
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	cout << "main函数中打印：" << s.name << s.age << s.score << endl;
	printStudent2(&s);
	cout << "main函数中打印：" << s.name << s.age << s.score << endl;*/
	//结构体中const使用场景
	/*//值传递复制出来的数据量越大，占用的内存越多(形参)	
	//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的形参出来，但是!会改变实参
	//为了禁止写入，使用const
	student s = { "张三",15,70 };
	printStudent(s);*/
	//结构体案例1			（建议复习）
	/*//每个老师带5个学生，共3个老师
	//打印出老师学生信息			都是数组
	struct Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	srand((unsigned int)time(NULL));		//随机数种子
	allocateSpace(tArray, len);
	printInfo(tArray,len);*/
	




/*

	system("pause");
	return 0;
}*/