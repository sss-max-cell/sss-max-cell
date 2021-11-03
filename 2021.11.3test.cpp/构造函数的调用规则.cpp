#include<iostream>
using namespace std;
//创建一个类，编译器会自动创建三个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝构造（值拷贝）
//如果自己创建了有参构造函数，编译器就不会在提供，默认构造函数
//如果我们写了拷贝构造函数，编译器就不会提供其他的构造函数啦———也可以用同样的函数进行测量
class person
{
public:
	person(int age)
	{
		m_age = age;
	}
	person(const person& p)//拷贝构造函数
	{
		m_age = p.m_age;
	}
	int m_age;
};
void test01()
{
	//person p;这样写的话，就会产生错误，因没没有默认构造函数，不能创建这个对象
	person p1(19);
	person p(p1);//由于他会提供拷贝构造函数，因此这个对象是正确的
	cout << "p的年龄是 " << p.m_age << endl;
}
int main()
{
	test01();
	system("pause");
}