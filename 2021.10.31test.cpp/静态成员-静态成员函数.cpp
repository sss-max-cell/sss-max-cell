#include<iostream>
using namespace std;
//静态成员函数
//所有所有对象共享同一个成员函数
//静态成员函数只能访问静态成员变量
class person
{
public:
	static void func()
	{
		a = 111;//静态成员函数只能访问静态成员变量
		//b = 222;静态成员函数，不可以访问非静态成员变量，因为它不可以区分到底是哪个那个对象的b
		cout << "void func函数的调用" << endl;
	}
	static int a;
	int b = 0;
};
int person::a= 10;
//类外访问不到私有的成员变量函数
void test01()
{
	//静态成员函数的调用
	//1通过类名访问
	person::func();
	//2通过对象访问
	person p;
	p.func();
}
int main()
{
	test01();
	return 0;
}