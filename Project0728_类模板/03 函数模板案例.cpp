#include<iostream>
using namespace std;

//模板封装一个排序函数
//从大到小排数组
//选择排序
template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;		//认定最大值下标
		for (int j = i + 1; j < len; j++)
		{
			//认定的  最大值  小于  遍历值 时，说明j下标的元素更大
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

//提供打印数组模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "babcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02()
{
	//测试int数组
	int intArr[] = {7,5,1,3,9,2,4,6,8};
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}




int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
