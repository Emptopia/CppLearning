#include<iostream>
using namespace std;

void test01()
{
	string str1 = "��";
	//1
	str1 += "������Ϸ";
	cout << str1 << endl;
	//2
	str1 += ':';
	cout << str1 << endl;
	//3
	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;
	//4
	string str3 = "I";
	str3.append(" love ");
	cout << str3 << endl;
	//5
	str3.append("gameabcde", 4);
	cout << str3 << endl;
	//6
	str3.append(str2);
	cout << str3 << endl;
	//7
	str3.append(str2, 4, 3);		//��4��λ�ý�ȡ3��
	cout << str3 << endl;



}


int main()
{
	test01();

	system("pause");
	return 0;
}