#include<iostream>
using namespace std;
class father1
{
public:
	father1()
	{
		m_a = 111;
	}
	int m_a;

};
class father2
{
public:
	father2()
	{
		m_a = 222;
	}
	int m_a;
};
//��̳��﷨������һ�У�һ�㲻���ڿ���������Ŀʱ���������ַ���
class son :public father1,public:: father2//�������public ϵͳ��Ϊ��private
{
public:
	int m_c;
	int m_d;

};

void test()
{
	son qq;
	cout << "son�Լ���ռ�Ŀռ�" << sizeof(qq);//16
	cout << "father1�µ�m_a" << qq.father1::m_a << endl;
	cout << "father2�µ�m_a" << qq.father2::m_a << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}