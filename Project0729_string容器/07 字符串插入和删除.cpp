#include<iostream>
using namespace std;

void test01()
{
	string str = "hello";
	//����
	str.insert(1, "111");							//��1λ�ò��ַ���
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;		//��1λ��ɾ3��



}



int main()
{
	test01();

	system("pause");
	return 0;
}