#include<iostream>
using namespace std;
//纯虚函数和抽象类
class base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类，就称为抽象类
	//抽象类特点
	//1.无法实例化对象
	//2.抽象的子类，必须要重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
	//这个不能创建对象
};
class son :public base
{
public:
	virtual void func() {};//必须写这一句，不然子类中无法创建对象

};
int main()
{
	system("pause");
	return 0;
}