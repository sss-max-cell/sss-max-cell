#include<iostream>
using namespace std;
//CPU
class CPU
{
public:
	//�����κ�ʵ�֣�֮����ڲ�ͬ�ĳ����н���ʵ��
	virtual void calaulate() = 0;
};
//�Կ�
class Vodecard
{
public:
	//�����κ�ʵ�֣�֮����ڲ�ͬ�ĳ����н���ʵ��
	virtual void display() = 0;
};
//�ڴ���
class Memory
{
public:
	//�����κ�ʵ�֣�֮����ڲ�ͬ�ĳ����н���ʵ��
	virtual void storage() = 0;
};
class computer
{
public:
	computer(CPU* cpu,Vodecard* card,Memory* cun)
	{
		m_cpu = cpu;
		m_card = card;
		m_cun = cun;
	}
	void work()
	{
		m_cpu->calaulate();
		m_card->display();
		m_cun->storage();
	}
private:
	CPU* m_cpu;//cpu���ָ��
	Vodecard* m_card;//�Կ����ָ��
	Memory* m_cun;//�ڴ��������ָ��
};
//���峧��
//intel
//cpu
class intelcpu :public CPU
{
	virtual void calaulate()
	{
		cout << "intel��CPU��ʼ����" << endl;
	}
};
//�Կ�
class intelvodecard :public Vodecard
{
	virtual void display()
	{
		cout << "intel��Vodecard��ʼ����" << endl;
	}
};
//�ڴ���
class intelMemory:public Memory
{
public:
	void storage()
	{
		cout << "intel���ڴ�����ʼ�洢" << endl;
	}
};
//���峧��
// lenovo
//cpu
class lenovocpu :public CPU
{
	virtual void calaulate()
	{
		cout << "lenovo��CPU��ʼ����" << endl;
	}
};
//�Կ�
class lenovovodecard :public Vodecard
{
	virtual void display()
	{
		cout << "lenovo��Vodecard��ʼ����" << endl;
	}
};
//�ڴ���
class lenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "lenovo���ڴ�����ʼ�洢" << endl;
	}
};
void test()
{
	CPU* Intelcpu = new intelcpu;
	Vodecard* Intelvodecard = new intelvodecard;
	Memory* Intermemory = new intelMemory;
	cout << "��һ̨���Կ�ʼ����" << endl;
	computer* qq = new computer(Intelcpu, Intelvodecard, Intermemory);
	qq->work();
	cout << "-------------------" << endl;
	CPU* Lenovocpu = new lenovocpu;
	Vodecard* Lenovovodecard = new lenovovodecard;
	Memory* Lenovomemory = new lenovoMemory;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	computer* pp = new computer(Lenovocpu, Lenovovodecard, Lenovomemory);
	pp->work();
	cout << "-------------------" << endl;
	/*CPU* Lenovocpu = new lenovocpu;
	Vodecard* Intelvodecard = new intelvodecard;
	Memory* Lenovomemory = new lenovoMemory;*/
	cout << "����̨���Կ�ʼ����" << endl;
	computer* cc = new computer(Lenovocpu,Intelvodecard, Lenovomemory);
	cc->work();
	cout << "-------------------" << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}