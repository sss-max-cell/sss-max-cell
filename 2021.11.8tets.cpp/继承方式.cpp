#include<iostream>
using namespace std;
//�����̳�
class father1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son1 :public father1
{
public:
	void func()
	{
		m_a = 10;//�����й���Ȩ�ޣ�����������Ȼ�ǹ���Ȩ��
		m_b = 22;//�����б���Ȩ�ޣ�����������Ȼ�Ǳ���Ȩ��
		//m_c = 2;//������˽��Ȩ�ޣ�������ʲ���
	}
};
void test1()
{
	son1 qq;
	qq.m_a = 111;//����Ȩ�ޣ�����Ҳ���Է��ʵ�
	//qq.m_b = 11;//����Ȩ�� ���ⲻ���Է��ʵ�
	//qq.m_c = 88;//˽��Ȩ�� ���ⲻ���Է��ʵ�
}
//����Ȩ��
//�������Ժ�˽��Ȩ����Ȼ���ʲ���������������Ȩ�ޣ�������Ϊ����Ȩ�ޣ�������ʲ���
class father2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son2:protected father2
{
public:
	void func()
	{
		m_a = 10;//�����й���Ȩ�ޣ�����������Ȼ�ǹ���Ȩ��
		m_b = 22;//�����б���Ȩ�ޣ�����������Ȼ�Ǳ���Ȩ��
		//m_c = 2;//������˽��Ȩ�ޣ�������ʲ���
	}
};
void test2()
{
	son2 oo;
	//ʲô�����ʲ���
}
//˽��Ȩ��
//�������Ժ�˽����Ȼ���ܱ����ʣ����ǹ���������Ȩ�ޣ�ȫ�����˽��Ȩ��
class father3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3:private father3
{
public:
	void func()
	{
		m_a = 111;//�����еĹ���Ȩ�ޣ���Ϊ˽��Ȩ��
		m_b = 222;//�����еı���Ȩ�ޣ���Ϊ˽��Ȩ��
		//m_c = 222;//�����е�˽��Ȩ�޷��ʲ���
	}
};
void test03()
{
	son3 mm;
	//mm.m_a;
	//mm.m_b;������˽��Ȩ�ޣ�������˲��ܱ�����
	//mm.m_c;
}
class grandson :public son3
{
public:
	void func()
	{
		//mm.m_a;
	//mm.m_b;������˽��Ȩ�ޣ���˲��ܱ����ʣ������������
	//mm.m_c;
	}
};
int main()
{
	system("pause");
	return 0;
}