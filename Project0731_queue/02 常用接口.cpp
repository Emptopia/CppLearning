#include<iostream>
using namespace std;
#include<queue>

//����Queue

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
	cout << "���д�С��" << q.size() << endl;

	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "������" << q.front().m_Name << " ���䣺" << q.front().m_Age;

		//�鿴��β
		cout << "������" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;

		//����
		q.pop();
	}

	cout << "���д�С��" << q.size();


}


int main()
{
	test01();
	system("pause");
	return 0;
}