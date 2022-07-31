#include<iostream>
using namespace std;
#include<stack>
void test01()
{
	stack<int>s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "栈的大小：" << s.size() << endl;

	//只要栈不为空，查看栈顶，并执行出栈
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为：" << s.top() << endl;
		//出栈 
		s.pop();
	}

	cout << "栈的大小：" << s.size() << endl;

}

int main()
{
	test01();



	system("pause");
	return 0;
}