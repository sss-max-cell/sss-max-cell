//1.���еĳ�Ա�����ڹ���״̬
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
ostream& operator<<(ostream& cout, person& p)
{
	cout << "m_a=" << p.m_a;
	cout << "m_b=" << p.m_b;
	return cout;//������ʹcout�������������
}
void test()
{
	person p;
	p.m_a=10;
	p.m_b=10;
	cout << p << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}
//1.���еĳ�Ա������˽��״̬
#include<iostream>
using namespace std;
class person
{
	friend ostream& operator<<(ostream& cout, person& p);
public:
	person(int a,int b)
	{
		m_a = a;
		m_b = b;
	}
private:
	int m_a;
	int m_b;
};
ostream& operator<<(ostream& cout, person& p)
{
	cout << "m_a=" << p.m_a;
	cout << "m_b=" << p.m_b;
	return cout;//������ʹcout�������������
}
void test()
{
	person p(10,20);
	cout << p << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}