#include<iostream>
using namespace std;
class father
{
public:
	static int m_a;
	void static func()
	{
		cout << "father下的static func()函数的调用" << endl;
	}
	void static func(int )
	{
		cout << "father下的static func(int)函数的调用" << endl;
	}
};
//静态变量，类内声明，类外初始化
int father::m_a = 222;
class son : public father
{
public:
	static int m_a;
	void static func()
	{
		cout << "son下的static func()函数的调用" << endl;
	}
};
int son::m_a = 111;
void test01()
{
	//定义变量的方法，进行静态变量的使用
	cout << "定义变量的方法，进行静态变量的使用" << endl;
	son qq;
	cout << qq.m_a << endl;
	cout << qq.father::m_a << endl;
	//直接用类名进行访问
	cout << "直接用类名进行访问" << endl;
	cout << son::m_a << endl;
	//第一个：：表明用类名的方法进行调用，第二个：：表明调用father下的
	cout << son::father::m_a << endl;
}
void test02()
{
	//用对象的方法调用静态同名函数
	son uu;
	uu.func();
	//由于father与son下的，funct重名，因此对于father下的同名成员函数的调用需要加上father：：的作用域
	uu.father::func();
	uu.father::func(2);
	//用类名进行调用
	son::func();
	son::father::func();
	son::father::func(2);
}
int main()
{ 
	//test01();
	test02();
	system("pause");
	return 0;
}