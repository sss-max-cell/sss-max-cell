#include<iostream>
using namespace std;
//普通方法
class yunsuan
{
public:
	int jisuan(string opera)
	{
		if (opera == "+")
			return m_num1 + m_num2;
		else if (opera == "-")
			return m_num1 - m_num2;
		else if (opera == "*")
			return m_num1 * m_num2;
	}
	int m_num1;
	int m_num2;
};
void test01()
{
	yunsuan qq;
	qq.m_num1 = 10;
	qq.m_num2 = 10;
	cout << qq.m_num1 << "+" << qq.m_num2 <<"="<<qq.jisuan("+")<< endl;
	cout << qq.m_num1 << "-" << qq.m_num2 << "=" << qq.jisuan("-") << endl;
	cout << qq.m_num1 << "*" << qq.m_num2 << "=" << qq.jisuan("*") << endl;
}
//多态实现计算
class father
{
public:
	virtual int getresult()
	{
		return 5;
	}
	int m_num1;
	int m_num2;
};
class add:public father
{
public:
	virtual int getresult()
	{
		return m_num1 + m_num2;
	}
};
class sum :public father
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
class chen:public father
{
public:
	int getresult()
	{
		return m_num1 * m_num2;
	}
};
void test02()
{
	//加法的实现
	father * pp=new add;
	pp->m_num1 = 10;
	pp->m_num2 = 10;
	cout << pp->m_num1 << "+" << pp->m_num2 << "=" << pp->getresult() << endl;
	delete pp;
	//减法的实现
	pp = new sum;
	pp->m_num1 = 10;
	pp->m_num2 = 10;
	cout << pp->m_num1 << "-" << pp->m_num2 << "=" << pp->getresult() << endl;
	delete pp;
	//乘法的实现
	pp = new chen;
	pp->m_num1 = 10;
	pp->m_num2 = 10;
	cout << pp->m_num1 << "*" << pp->m_num2 << "=" << pp->getresult() << endl;
	delete pp;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}