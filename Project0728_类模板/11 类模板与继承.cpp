#include<iostream>
using namespace std;

template<class T>
class Base
{
	T m;
};

//继承时 要指定 父类T数据类型
class Son :public Base<int>
{


};

void test01()
{
	Son s1;
}

//如果想灵活指定父类中T的类型，子类也需要变为类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02()
{
	Son2<int, char> s2;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
