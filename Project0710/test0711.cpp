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

void bubbleSort(int* arr, int len)		//����1�������׵�ַ		����2�����鳤��
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j<j+1��ֵ����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arr, int len)			//����������׵�ַҲ����
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<endl;				//����������׵�ַ��Ҳ����ֱ���������ʳ�Ա��ֵ
	}
}

struct student
{
	//һЩ���ͼ�����ɵ�һ������
	string name;
	int age;
	int score;
}s3;	//�����ṹ�����3��˳�㴴����

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

void printStudent1(struct student s)			//ֵ����
{
	s.age = 100;
	cout << "�Ӻ���1�У�" << s.name << s.age << s.score << endl;
}

void printStudent2(struct student* p)			//��ַ����
{
	p->age = 100;
	cout << "�Ӻ���2�У�" << p->name << p->age << p->score << endl;
}

void printStudent(const student s)
{
	//s.age = 150;		//�޷��޸���
	cout << s.name << s.age << s.score << endl;
}

void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];			//string���������÷�
		//ͨ��ѭ����ÿ����ʦ������ѧ������ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName = nameSeed[j];
			int random = rand() % 61 +40;		//40~100�������    
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName <<
				" ���Է�����" << tArray[i].sArray[j].score << endl;

		}
	}
}

int main()
{
*/

	//ָ�������
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* p = arr;		//�����׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;
	p++;					//��ָ�����ƫ��4(32)/8(64)���ֽ�
	cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;
	cout << "����ָ���������" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		//cout << arr[i] << endl;
		cout << *p2 << endl;				//���Ժϲ���*p2++
		p2++;
	}*/
	//ָ��ͺ���
	/*//1��ֵ����		//ʵ�β���
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//2����ַ����	//��������ʵ��
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/
	//ָ�롢���顢����		//ð������2
	/*//��������װһ������������ð������ʵ�ֶ������������������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);		//���鳤��sizeof(arr)/sizeof(arr[0])
	bubbleSort(arr, len);
	printArray(arr, len);*/
	//�ṹ��
	/*//�����ṹ�����1				//struct ����ʡ��
	struct student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
	//�����ṹ�����2				//����ʱ����Ա��ֵ
	struct student s2 = { "����",19,80 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
	//�����ṹ�����3				//�����ṹ��ʱ������һ�㲻�ã�
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;*/
	//�ṹ������
	/*struct student stuArray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
	//��ֵ
	stuArray[2].name = "����";
	//����
	for (int i = 0; i < 3; i++)
	{
		cout << stuArray[i].name << stuArray[i].age << stuArray[i].score << endl;
	}*/
	//�ṹ��ָ��
	/*//1�������ṹ�����
	student s = { "����",18,100 };
	//2��ͨ��ָ��ָ��ṹ�����
	student* p = &s;
	//3��ͨ��ָ����ʽṹ������е�����		//p->name/(*p).name
	cout << p->name << p->age << (*p).score << endl;*/
	//�ṹ��Ƕ�׽ṹ��
	/*teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "��ʦ����Ϣ��" << t.id << t.name << t.age << endl;
	cout << "��ʦѧ�������ԣ�" << t.stu.name << t.stu.age << t.stu.score << endl;*/
	//�ṹ������������
	/*//�����޸������������ݣ���ֵ���ݣ���֮�õ�ַ����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	cout << "main�����д�ӡ��" << s.name << s.age << s.score << endl;
	printStudent2(&s);
	cout << "main�����д�ӡ��" << s.name << s.age << s.score << endl;*/
	//�ṹ����constʹ�ó���
	/*//ֵ���ݸ��Ƴ�����������Խ��ռ�õ��ڴ�Խ��(�β�)	
	//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µ��βγ���������!��ı�ʵ��
	//Ϊ�˽�ֹд�룬ʹ��const
	student s = { "����",15,70 };
	printStudent(s);*/
	//�ṹ�尸��1			�����鸴ϰ��
	/*//ÿ����ʦ��5��ѧ������3����ʦ
	//��ӡ����ʦѧ����Ϣ			��������
	struct Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	srand((unsigned int)time(NULL));		//���������
	allocateSpace(tArray, len);
	printInfo(tArray,len);*/
	




/*

	system("pause");
	return 0;
}*/