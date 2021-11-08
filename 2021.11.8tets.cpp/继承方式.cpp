#include<iostream>
using namespace std;
//公开继承
class father1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son1 :public father1
{
public:
	void func()
	{
		m_a = 10;//父类中公开权限，到子类中仍然是公共权限
		m_b = 22;//父类中保护权限，到子类中仍然是保护权限
		//m_c = 2;//父类中私有权限，子类访问不到
	}
};
void test1()
{
	son1 qq;
	qq.m_a = 111;//公开权限，类外也可以访问到
	//qq.m_b = 11;//保护权限 类外不可以访问到
	//qq.m_c = 88;//私有权限 类外不可以访问到
}
//保护权限
//经过他以后，私有权限仍然访问不到，但是其他的权限，都将变为保护权限，类外访问不到
class father2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son2:protected father2
{
public:
	void func()
	{
		m_a = 10;//父类中公开权限，到子类中仍然是公共权限
		m_b = 22;//父类中保护权限，到子类中仍然是保护权限
		//m_c = 2;//父类中私有权限，子类访问不到
	}
};
void test2()
{
	son2 oo;
	//什么都访问不到
}
//私有权限
//经过他以后，私有让然不能被访问，但是公开，保护权限，全部变成私有权限
class father3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3:private father3
{
public:
	void func()
	{
		m_a = 111;//父类中的公开权限，变为私有权限
		m_b = 222;//父类中的保护权限，变为私有权限
		//m_c = 222;//父类中的私有权限访问不到
	}
};
void test03()
{
	son3 mm;
	//mm.m_a;
	//mm.m_b;由于是私有权限，类外因此不能被访问
	//mm.m_c;
}
class grandson :public son3
{
public:
	void func()
	{
		//mm.m_a;
	//mm.m_b;由于是私有权限，因此不能被访问，与上面的相似
	//mm.m_c;
	}
};
int main()
{
	system("pause");
	return 0;
}