#include<iostream>
using namespace std;
class father
{
public:
	father()
	{
		m_a = 100;
	}
	void func()
	{
		cout << "father�е�func()�ĵ���" << endl;
	}
	void func(int a)
	{
		cout << "father�е�func(int a)�ĵ���" << endl;
	}
	int m_a;
};
class son :public father
{
public:
	son()
	{
		m_a = 333;
	}
	void func()
	{
		cout << "son �е�func()�ĵ���" << endl;
	}
	void func(int a)
	{
		cout << "son �е�func(int a)�ĵ���" << endl;
	}
	int m_a;
};
//ͬ����Ա����Ĳ���
void test01()
{
	son pp;
	//����son�е�m_a
	cout << "son �е�m_a" << pp.m_a << endl;
	//����father�е�m_a
	cout << "father �е�m_a" << pp.father::m_a << endl;
}
//ͬ����Ա�����ĵ���
void test02()
{
	son mm;
	//father�еĵ���
	mm.father::func();//�޲�
	mm.father::func(22);//�в�
	//son�еĵ���
	mm.func();//�޲�
	mm.func(22);//�в�
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}