#include<iostream>
using namespace std;
class myinteger
{
	friend ostream& operator<<(ostream& cout, myinteger qq);
public:
	//1.ǰ�ü���
	//����ǰ�õ�ֻҪ����&���Ϳ��Խ���--(--qq)
	myinteger& operator--()
	{
		--m_a;
		return *this;
	}
	//2.���ü���
	//����д��������(yy--)-- ��������
	myinteger operator--(int)
	{
		myinteger ii;
		ii=*this;
		m_a--;
		return ii;
	}
public:
	myinteger()
	{
		m_a = 0;
	}
private:
	int m_a;
};
ostream& operator<<(ostream& cout, myinteger qq)
{
	cout << qq.m_a << endl;
	return cout;
}
void test01()
{
	myinteger qq;
	cout << --qq << endl;
	cout << qq << endl;
	cout << --(--qq) << endl;//
	cout << qq << endl;
	cout << --qq << endl;
	cout << qq << endl;
}
void test02()
{
	myinteger yy;
	cout << yy-- << endl;
	cout << yy << endl;
	cout << (yy--)-- << endl;
	cout << yy << endl;
	cout << yy-- << endl;
	cout << yy << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}