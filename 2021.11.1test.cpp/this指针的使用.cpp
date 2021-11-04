#include<iostream>//这个不太完整，后面会有补充
using namespace std;
class Person
{
public:
	//1、解决成员变量与形参重名的情况
	Person (int age)//这个是构造函数
	{
		//this 指向的是被调用成员函数 所属对象 即p1。相当于this这个指针指向的就是，新定义的对象
		this->age = age;
		//地址用—>，结构体/对象的名字  用.
	}
	//2、
	Person& personaddage(Person &p)
	{
		this->age = p.age;
		return *this;
	}
	int age;
};
void test01()
{
	Person p1(18);
	cout << "p1的年龄 " << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);
	//p2.personaddage(p1);这个是单独传入时这样写的，p2为对象，调用类中的personaddage函数
	p2.personaddage(p1).personaddage(p1).personaddage(p1);
	cout << "p2的年龄 " << p2.age;
}
int main()
{
	test02();
	return 0;
}