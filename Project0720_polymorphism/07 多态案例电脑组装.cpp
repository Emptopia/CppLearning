#include<iostream>
using namespace std;

//������Ҫ��ɲ�����CPU���Կ����ڴ���
//1��ÿ�������װ��������࣬Ϊ��ͬ�����ṩ��ͬ���
//2�������������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//3������ʱ��װ��̨��ͬ�ĵ��Խ��й���

//�����CPU��
class CPU
{
public:
	//������㺯��
	virtual void calculate() = 0;
};

//������Կ���
class VideoCard
{
public:
	//������ʾ����
	virtual void display() = 0;
};
//������ڴ���
class Memory
{
public:
	//����洢����
	virtual void storage() = 0;
};


class Computer
{
public:

	Computer(CPU* cpu, VideoCard* vc, Memory* mem)				//��̬ǰ�ᣡ��������ָ�룡��
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	~Computer()			//�ͷ�3���������
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
	CPU* m_cpu;				//CPU���ָ��
	VideoCard* m_vc;			//�Կ����ָ��
	Memory* m_mem;		//�ڴ����ָ��
};

class InterCPU : public CPU
{
	void calculate()
	{
		cout << "IntelCPU����" << endl;
	}
};

class InterVideoCard : public VideoCard
{
	virtual void display()
	{
		cout << "Intel�Կ���ʾ" << endl;
	}
};

class InterMemory : public Memory
{
	virtual void storage()
	{
		cout << "Intel�ڴ�洢" << endl;
	}
};

class LenovoCPU : public CPU
{
	virtual void calculate()
	{
		cout << "LenovoCPU����" << endl;
	}
};

class LenovoVideoCard : public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo�Կ���ʾ" << endl;
	}
};

class LenovoMemory : public Memory
{
	virtual void storage()
	{
		cout << "Lenovo�ڴ�洢" << endl;
	}
};

//���Խ׶Σ���װ��̨��ͬ����

void test01()
{
	CPU* interCpu = new InterCPU;		//��̬��������ָ�� �������
	VideoCard* intelCard = new InterVideoCard;
	Memory* intelMem = new InterMemory;
	Computer* computer1 = new Computer(interCpu, intelCard, intelMem);
	computer1->work();
	//����ʱ���û���ͷŸɾ�����˿����ṩһ�������������ͷ�3���������
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