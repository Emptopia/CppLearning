#include<iostream>
using namespace std;

//电脑主要组成部件：CPU、显卡、内存条
//1、每个零件封装出抽象基类，为不同厂商提供不同零件
//2、创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//3、测试时组装三台不同的电脑进行工作

//抽象的CPU类
class CPU
{
public:
	//抽象计算函数
	virtual void calculate() = 0;
};

//抽象的显卡类
class VideoCard
{
public:
	//抽象显示函数
	virtual void display() = 0;
};
//抽象的内存类
class Memory
{
public:
	//抽象存储函数
	virtual void storage() = 0;
};


class Computer
{
public:

	Computer(CPU* cpu, VideoCard* vc, Memory* mem)				//多态前提！！！父类指针！！
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	~Computer()			//释放3个电脑零件
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}

	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
private:
	CPU* m_cpu;				//CPU零件指针
	VideoCard* m_vc;			//显卡零件指针
	Memory* m_mem;		//内存零件指针
};

class InterCPU : public CPU
{
	void calculate()
	{
		cout << "IntelCPU计算" << endl;
	}
};

class InterVideoCard : public VideoCard
{
	virtual void display()
	{
		cout << "Intel显卡显示" << endl;
	}
};

class InterMemory : public Memory
{
	virtual void storage()
	{
		cout << "Intel内存存储" << endl;
	}
};

class LenovoCPU : public CPU
{
	virtual void calculate()
	{
		cout << "LenovoCPU计算" << endl;
	}
};

class LenovoVideoCard : public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo显卡显示" << endl;
	}
};

class LenovoMemory : public Memory
{
	virtual void storage()
	{
		cout << "Lenovo内存存储" << endl;
	}
};

//测试阶段，组装三台不同电脑

void test01()
{
	CPU* interCpu = new InterCPU;		//多态！！父类指针 堆区零件
	VideoCard* intelCard = new InterVideoCard;
	Memory* intelMem = new InterMemory;
	Computer* computer1 = new Computer(interCpu, intelCard, intelMem);
	computer1->work();
	//但此时零件没有释放干净，因此可以提供一个析构函数，释放3个电脑零件
	delete computer1;
	cout << "--------------------------" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "--------------------------" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;




}


int main()
{
	test01();




	system("pause");
	return 0;
}