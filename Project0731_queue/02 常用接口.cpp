#include<iostream>
using namespace std;
#include<queue>

//队列Queue

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}


	string m_Name;
	int m_Age;

};

void test01()
{
	queue<Person>q;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);

	q.push(p1);				//front
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);				//back
	cout << "队列大小：" << q.size() << endl;

	while (!q.empty())
	{
		//查看队头
		cout << "姓名：" << q.front().m_Name << " 年龄：" << q.front().m_Age;

		//查看队尾
		cout << "姓名：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;

		//出队
		q.pop();
	}

	cout << "队列大小：" << q.size();


}


int main()
{
	test01();
	system("pause");
	return 0;
}