#include<iostream>
using namespace std;

void test01()
{
	string str = "abcdef";
	string SubStr = str.substr(1, 3);				//��1λ�ÿ�ʼ��ȡ3��
	cout << "SubStr = " << SubStr << endl;


}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���ַ��ȡ�û�����Ϣ
	int pos = email.find("@");
	cout << pos << endl;
	string username = email.substr(0, pos);
	cout << username << endl;

}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}