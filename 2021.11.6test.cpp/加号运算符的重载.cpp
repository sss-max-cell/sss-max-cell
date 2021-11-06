//注意一：对于内置的数据类型不能改变
//注意二：不要滥用运算重载符
#include<iostream>
using namespace std;
class person
{
public://忽然发现对于类内的成员函数，如果不在他的前面加上public，系统就会认为它是私密的
	//类内加号运算符的定义
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
		tem.m_a = a + p.m_a;//在类内重载，暂时在本人知识内不能实现
		tem.m_b = a + p.m_b;
		return tem;
	}*/
public:
	int m_a;
	int m_b;
};
//全局函数定义加号运算符
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
	////类内调用函数
	p3 = p1.operator+(p2);//原始的调用方式
	p3 = p1 + p2;//c++特有的调用方式，但是这个方式必须用operator+
	////全局函数声明加号运算符
	p3 = operator+(p1, p2);//原始加法
	p3 = p1 + p2;//用这个函数名字的独特加法
	cout << "p3的m_a" << p3.m_a << endl;
	cout << "p3的m_b" << p3.m_b << endl;
	//加号运算符的重载
	p3 = p1 + 222;
	cout << "p3的m_a" << p3.m_a << endl;
	cout << "p3的m_b" << p3.m_b << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}