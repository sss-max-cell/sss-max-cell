#include<iostream>
using namespace std;
//拷贝构造函数的调用时机

class person
{
public:
	person()
	{
		cout << "person构造函数的调用" << endl;
	}
	person(int age)
	{
		cout << "person有参构造函数的调用" << endl;
		m_age = age;
	}
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person拷贝构造函数的调用" << endl;
	}

	~person()
	{
		cout << "person析构函数的调用" << endl;
	}
	int m_age;
};
//1、使用一个已经创建完的对象来初始一个新的对象
void test01()
{
	person p1(18);
	person p2 (p1);
	cout << "p2的年龄 " << p2.m_age<<endl;
}
//2、值传递的方式，给函数参数传值
void dowork(person pp)
{
	//它是拷贝出来的，不会改变原来的值
}
void test02()
{
	person p;
	dowork(p);
}
//3、值方式返回局部对象
person dowork()
{
	person ppp;
	return ppp;//需要函数上面用person,将会新拷贝一份返回
}
void test03()
{
	person aa = dowork();
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}