#include<iostream>
using namespace std;
class myinteger
{
	friend ostream& operator<<(ostream& cout, myinteger);
public:
	//ǰ��++������ʵ��
	//�������÷��ţ�Ϊ��������ʼ�ն�һ�������еļӼ�
	myinteger& operator++()
	{
		++m_a;
		return *this;
	}
	//����++������ʵ��
	//�������÷��ţ��������������мӼ�����
	//int����ռλ���������ұ�����ֻ��int���������������Ͳ�ͬ
	//���üӼӵĻ������ô����÷���������Ϊtem�Ǿֲ�����������ͱ�����������˲��ܷ���������





	
	myinteger operator++(int)
	{
		myinteger tem;
		tem =*this;
		m_a++;
		return tem;
	}
public:
	myinteger()
	{
		m_a = 0;
	}
private:
	int m_a;
};
ostream& operator<<(ostream& cout, myinteger qqq)
{
	cout << qqq.m_a;
	return cout;
}
void test01()
{
	myinteger qq;
	cout << ++qq << endl;
	cout << qq << endl;
	cout << ++(++qq) << endl;
	cout << qq << endl;
	cout << ++qq << endl;
	cout << qq << endl;
}
void test02()
{
	myinteger pp;
	cout << pp++ << endl;
	cout << pp << endl;
	cout << (pp++)++ << endl;
	cout << pp << endl;
	cout << pp++ << endl;
	cout << pp << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}