#include<iostream>
using namespace std;
//��ʼ���б�
class person
{
public:
	//��ͳ��ʼ������
	//person(int a, int b, int c)//���캯�����ڸ����ڵı�������ֵ
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//��ʼ���б��ʼ�ķ���
	//person() :m_a(10), m_b(20), m_c(30),��׼��ʼ���б���
    person(int a,int b,int c):m_a(a), m_b(b), m_c(c)
    {

    }
	int m_a;
	int m_b;
	int m_c;
};
void test01()
{
	//person p(10, 20, 30);
	person p(30,20,10);//�´���������p��p�����û���õ�15�еĺ��������г�ʼ���б������г�ʼ��
	cout << "m_a������ " << p.m_a << endl;
	cout << "m_b������ " << p.m_b << endl;
	cout << "m_c������ " << p.m_c << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}