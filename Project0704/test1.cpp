/*#include <iostream>
using namespace std;
int main() {*/
	/*逻辑非
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;
	*/
	/*逻辑与
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	*/
	/*逻辑或
	int a = 10;
	int b = 0;
	cout << (a || b) << endl;
	a = 0;
	cout << (a || b) << endl;
	*/
	/*顺序结构
	int score = 0;
	cout << "请输入分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600) {
		cout << "考上" << endl;
	}
	else
		cout << "寄" << endl;
	*/
	/*多条件if
	int score = 0;
	cout << "输入分数" << endl;
	cin >> score;
	cout << "您的分数为" << score << endl;
	if (score > 600) {
		cout << "考上一本" << endl;
	}
	else if (score > 500) {
		cout << "考上二本" << endl;
	}
	else if (score > 400) {
		cout << "考上三本" << endl;
	}
	else {
		cout << "寄" << endl;
	}*/
	/*嵌套if
	int score = 0;
	cout << "输入分数" << endl;
	cin >> score;
	cout << "您的分数为" << score << endl;
	if (score > 600) {
		cout << "考上一本" << endl;
		if (score > 700) {
			cout << "考上清华" << endl;
		}
		else if (score > 650) {
			cout << "考上北大" << endl;
		}
		else {
			cout << " 普通本科" << endl;

		}
	}

	else {
		cout << "寄" << endl;
	}
	*/
	/*三只小猪
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "请输入小猪a的体重" << endl;
	cin >> num1;
	cout << "小猪a的体重：" << num1 << endl;
	cout << "请输入小猪b的体重" << endl;
	cin >> num2;
	cout << "小猪b的体重：" << num2 << endl;
	cout << "请输入小猪c的体重" << endl;
	cin >> num3;
	cout << "小猪c的体重：" << num3 << endl;
	if (num1 > num2) 
	{
		if (num1 > num3)
		{
			cout << "a最重" << endl;
		}
		else
		{
			cout << " c最终" << endl;
		}
	}
	else 
	{
		if (num2 > num3)
		{
			cout << "b最重" << endl;
		}
		else
		{
			cout << " c最终" << endl;
		}

	}
	*/
	/*三目运算符
		int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);		//a>b则给a，否则b
	cout << "c=" << c << endl;
	*/
	/*switch
	cout << "请给电影打分" << endl;
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;	//推出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影很一般" << endl;
		break;
	case 5:
		cout << "您认为电影很一般" << endl;
		break;
	default:
		cout << "您认为这是烂片" << endl;
		break;
	}
	*/




/*
	system("pause");
	return 0;

}*/