#include<iostream>
using namespace std;
class myinteger
{
	friend ostream& operator<<(ostream& cout, myinteger qq);
public:
	//1.前置减减
	//这种前置的只要加上&，就可以进行--(--qq)
	myinteger& operator--()
	{
		--m_a;
		return *this;
	}
	//2.后置减减
	//这种写法，对于(yy--)-- 仍有问题
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