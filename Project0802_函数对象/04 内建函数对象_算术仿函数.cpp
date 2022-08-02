#include<iostream>
using namespace std;
#include<functional>

//实现四则运算
//取反negate()		一元运算
//加减乘除			二元运算

//反negate
void test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

//加plus
void test02()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

//减minus
//乘multiplies
//除devides
//模modulus

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}