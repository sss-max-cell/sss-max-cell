//ע��һ���������õ��������Ͳ��ܸı�
//ע�������Ҫ�����������ط�
#include<iostream>
using namespace std;
class person
{
public://��Ȼ���ֶ������ڵĳ�Ա�����������������ǰ�����public��ϵͳ�ͻ���Ϊ����˽�ܵ�
	//���ڼӺ�������Ķ���
	person operator+(person& p)
	{
		person tem;
		tem.m_a = this->m_a + p.m_a;
		tem.m_b = this->m_b + p.m_b;
		return tem;
	}
	/*person operator+(person& p,int a)
	{
		person tem;
		tem.m_a = a + p.m_a;//���������أ���ʱ�ڱ���֪ʶ�ڲ���ʵ��
		tem.m_b = a + p.m_b;
		return tem;
	}*/
public:
	int m_a;
	int m_b;
};
//ȫ�ֺ�������Ӻ������
person operator+(person& p11, person& p22)
{
	person tem;
	tem.m_a = p11.m_a + p22.m_a;
	tem.m_b = p11.m_b + p22.m_b;
	return tem;
}
person operator+(person& p11, int a)
{
	person tem;
	tem.m_a = p11.m_a + a;
	tem.m_b = p11.m_b + a;
	return tem;
}
void test()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	person p2;
	p2.m_a = 20;
	p2.m_b = 20;
	person p3;
	////���ڵ��ú���
	p3 = p1.operator+(p2);//ԭʼ�ĵ��÷�ʽ
	p3 = p1 + p2;//c++���еĵ��÷�ʽ�����������ʽ������operator+
	////ȫ�ֺ��������Ӻ������
	p3 = operator+(p1, p2);//ԭʼ�ӷ�
	p3 = p1 + p2;//������������ֵĶ��ؼӷ�
	cout << "p3��m_a" << p3.m_a << endl;
	cout << "p3��m_b" << p3.m_b << endl;
	//�Ӻ������������
	p3 = p1 + 222;
	cout << "p3��m_a" << p3.m_a << endl;
	cout << "p3��m_b" << p3.m_b << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}