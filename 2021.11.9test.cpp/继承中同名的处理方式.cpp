#include<iostream>
using namespace std;
class father
{
public:
	father()
	{
		m_a = 100;
	}
	void func()
	{
		cout << "father中的func()的调用" << endl;
	}
	void func(int a)
	{
		cout << "father中的func(int a)的调用" << endl;
	}
	int m_a;
};
class son :public father
{
public:
	son()
	{
		m_a = 333;
	}
	void func()
	{
		cout << "son 中的func()的调用" << endl;
	}
	void func(int a)
	{
		cout << "son 中的func(int a)的调用" << endl;
	}
	int m_a;
};
//同名成员对象的测试
void test01()
{
	son pp;
	//调用son中的m_a
	cout << "son 中的m_a" << pp.m_a << endl;
	//调用father中的m_a
	cout << "father 中的m_a" << pp.father::m_a << endl;
}
//同名成员函数的调用
void test02()
{
	son mm;
	//father中的调用
	mm.father::func();//无参
	mm.father::func(22);//有参
	//son中的调用
	mm.func();//无参
	mm.func(22);//有参
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}