#include<iostream>
using namespace std;

//解决方式
//1、直接包含源文件
//#include"Person.cpp"				

//2、将.h和.cpp写到一起，改为.hpp
#include"Person.hpp"

//类模板的分文件编写的问题以及解决

void test01()
{
	Person<string, int> p("Jerry", 18);
	p.ShowPerson();
}


int main()
{
	test01();
	system("pause");
	return 0;
}