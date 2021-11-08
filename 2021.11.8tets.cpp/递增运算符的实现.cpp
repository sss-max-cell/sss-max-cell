#include<iostream>
using namespace std;
class myinteger
{
	friend ostream& operator<<(ostream& cout, myinteger);
public:
	//前置++函数的实现
	//加上引用符号，为了让他是始终对一个数进行的加减
	myinteger& operator++()
	{
		++m_a;
		return *this;
	}
	//后置++函数的实现
	//不加引用符号，它不能连续进行加减操作
	//int代表占位操作，并且编译器只认int，其他的数据类型不同
	//后置加加的话，不用带引用符号啦，因为tem是局部变量，用完就被销毁啦，因此不能返回其引用





	
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