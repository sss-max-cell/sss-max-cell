#include<iostream>
using namespace std;
class father
{
public:
	static int m_a;
	void static func()
	{
		cout << "father�µ�static func()�����ĵ���" << endl;
	}
	void static func(int )
	{
		cout << "father�µ�static func(int)�����ĵ���" << endl;
	}
};
//��̬���������������������ʼ��
int father::m_a = 222;
class son : public father
{
public:
	static int m_a;
	void static func()
	{
		cout << "son�µ�static func()�����ĵ���" << endl;
	}
};
int son::m_a = 111;
void test01()
{
	//��������ķ��������о�̬������ʹ��
	cout << "��������ķ��������о�̬������ʹ��" << endl;
	son qq;
	cout << qq.m_a << endl;
	cout << qq.father::m_a << endl;
	//ֱ�����������з���
	cout << "ֱ�����������з���" << endl;
	cout << son::m_a << endl;
	//��һ�����������������ķ������е��ã��ڶ���������������father�µ�
	cout << son::father::m_a << endl;
}
void test02()
{
	//�ö���ķ������þ�̬ͬ������
	son uu;
	uu.func();
	//����father��son�µģ�funct��������˶���father�µ�ͬ����Ա�����ĵ�����Ҫ����father������������
	uu.father::func();
	uu.father::func(2);
	//���������е���
	son::func();
	son::father::func();
	son::father::func(2);
}
int main()
{ 
	//test01();
	test02();
	system("pause");
	return 0;
}