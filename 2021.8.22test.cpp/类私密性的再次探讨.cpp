#include<iostream>
using namespace std;
//��Ա��������Ϊ˽��
//1�����Կ��ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class person
{
public:
	//��������
	void setname(string name)//����Ǿ����޸� name�ĺ���
	{
		m_name = name;
	}
	//��ȡ����
	string getname()//����ǶԾ��������������ĺ���
	{
		return m_name;
	}
	//��ȡ����
	int getage()//���ֶ����൱����һ����������return���н�����ֵ���з���
	{
		//m_age = 0;
		return m_age;
	}
	void setage(int age)
	{
		if (age < 0 || age>150)//����������ж�,�����ʵĻ���return
		{
			m_age = 0;
			cout << "�������������" << endl;
			return ;
		}
		m_age = age;
		return;
	}
	//��������
	void setlover(string lover)//ֻ�ܶ����������������ˣ����ǲ����ܶ�����з���
	{
		m_lover = lover;
	}
private:
	//����	�ɶ���д
	string m_name;
	//����	ֻ��
	int m_age;
	//����	ֻд
	string m_lover;
};
int main()
{
	person p;
	p.setname("ߣߣ");
	cout << "����Ϊ " <<p.getname() <<endl;
	cout << "����Ϊ��" << p.getage() << endl;
	p.setage(10);
	cout << "����Ϊ��" << p.getage() << endl;
	
}





