#include<iostream>
using namespace std;
class person
{
public:
							//������
	//���ڲ�����һ��thisָ�룬��ָ�򲻿��Ըı䣬������ָ���ֵ�ǿ��Ըı��.
	//����������const����֤����ֵ���ܱ��ı䡣
	//const int*p   ������ָ���ֵ���ܱ��ı�/int const *P  ������ָ��Ķ����ܱ��ı�
	void personss()const
	{
		//m_age = 100;
		//this = NULL;
		m_age2 = 222;
	}
	void func()
	{

	}
	int m_age;
	mutable int m_age2;//��ʱһ������ı�������ʹ����const������£�Ҳ���Ա��޸�
};
void test02()
{
	//������
	const person p;
	//p.m_age = 11;//�������ֵ���ܱ��޸�
	p.m_age2 = 222;//����age2ǰ��mutable����˿��Խ����޸�
	//������ֻ�ܵ��ó�����
	p.personss();
	//p.func();��Ϊ��������������޸ı���������������������޸ı�������˲����ݣ��ʻᱨ��
}
int main()
{
	system("pause");
	return 0;
}