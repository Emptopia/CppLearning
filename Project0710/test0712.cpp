//#include<iostream>
//using namespace std;
//
//struct Hero
//{
//	string name;
//	int age;
//	string gender;
//};
//
//void bubbleSort(struct Hero heroArray[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-i-1; j++)
//		{
//			if (heroArray[j].age > heroArray[j + 1].age)
//			{
//				struct Hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printHero(struct Hero heroArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "英雄的姓名：" << heroArray[i].name << " 年龄" << heroArray[i].age
//			<< " 性别：" << heroArray[i].gender << endl;
//	}
//}
//
//int main()
//{
//	//结构体案例，按成员排序
//	struct Hero heroArray[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"}
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	bubbleSort(heroArray, len);
//	printHero(heroArray, len);
//
//
//
//
//
//	system("pause");
//	return 0;
//}