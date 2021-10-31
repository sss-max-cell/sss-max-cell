#include<iostream>
using namespace std;
class person
{
public:
	//特点
	//1.所有对象都共用一份对象
	//2.编译的时候就会分配空间
	//3.类内声明，类外初始化
	static int a;
private:
	static int b;
};
int person::a = 10;//第三条的解释
int person::b=20;
void test01()
{
	person p;
	cout << p.a << endl;
	person w;//第一条的解释
	w.a = 20;
	cout << p.a << endl;
	//p.b他处在私有作用域下，不可以直接被访问
}
void test02()
{
	//静态成员变量，不属于某一个变量上，而是可以被其他对象一起共同使用的
	//通过对象进行访问
	person p;
	cout << p.a << endl;
	//通过类名进行访问
	cout << person::a << endl;
}
int main()
{
	test01();
	//test02();

	return 0;
}