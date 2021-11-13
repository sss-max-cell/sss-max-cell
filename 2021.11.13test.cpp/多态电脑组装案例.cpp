#include<iostream>
using namespace std;
//CPU
class CPU
{
public:
	//不做任何实现，之后会在不同的厂商中进行实现
	virtual void calaulate() = 0;
};
//显卡
class Vodecard
{
public:
	//不做任何实现，之后会在不同的厂商中进行实现
	virtual void display() = 0;
};
//内存条
class Memory
{
public:
	//不做任何实现，之后会在不同的厂商中进行实现
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
	CPU* m_cpu;//cpu零件指针
	Vodecard* m_card;//显卡零件指针
	Memory* m_cun;//内存条的零件指针
};
//具体厂商
//intel
//cpu
class intelcpu :public CPU
{
	virtual void calaulate()
	{
		cout << "intel的CPU开始工作" << endl;
	}
};
//显卡
class intelvodecard :public Vodecard
{
	virtual void display()
	{
		cout << "intel的Vodecard开始工作" << endl;
	}
};
//内存条
class intelMemory:public Memory
{
public:
	void storage()
	{
		cout << "intel的内存条开始存储" << endl;
	}
};
//具体厂商
// lenovo
//cpu
class lenovocpu :public CPU
{
	virtual void calaulate()
	{
		cout << "lenovo的CPU开始工作" << endl;
	}
};
//显卡
class lenovovodecard :public Vodecard
{
	virtual void display()
	{
		cout << "lenovo的Vodecard开始工作" << endl;
	}
};
//内存条
class lenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "lenovo的内存条开始存储" << endl;
	}
};
void test()
{
	CPU* Intelcpu = new intelcpu;
	Vodecard* Intelvodecard = new intelvodecard;
	Memory* Intermemory = new intelMemory;
	cout << "第一台电脑开始工作" << endl;
	computer* qq = new computer(Intelcpu, Intelvodecard, Intermemory);
	qq->work();
	cout << "-------------------" << endl;
	CPU* Lenovocpu = new lenovocpu;
	Vodecard* Lenovovodecard = new lenovovodecard;
	Memory* Lenovomemory = new lenovoMemory;
	cout << "第二台电脑开始工作" << endl;
	computer* pp = new computer(Lenovocpu, Lenovovodecard, Lenovomemory);
	pp->work();
	cout << "-------------------" << endl;
	/*CPU* Lenovocpu = new lenovocpu;
	Vodecard* Intelvodecard = new intelvodecard;
	Memory* Lenovomemory = new lenovoMemory;*/
	cout << "第三台电脑开始工作" << endl;
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