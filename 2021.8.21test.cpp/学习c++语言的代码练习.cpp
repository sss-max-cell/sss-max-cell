//01 函数默认参数的操作
#include<iostream>
using namespace std;
int add(int a,int b=10,int c=10)//如果某个地方有默认参数，那么从这个参数开始从左向右就必须都有默认参数
{
	return a + b + c;
}
int addd(int a = 10, int b = 10);
int addd(int a = 10, int b = 10)//如果声明已经有默认参数的话，那么实现这个函数就不能再次有默认参数
{//两个中只能有一个
	return a + b;
}
int main()
{
	int c = add(10);//如果我传的话，就用我传的值
	cout << "c="<<c << endl;
}
//02函数的占位
#include<iostream>
using namespace std;
void add(int a, int)//对于其的作用，后期的课程会讲到
{
	cout << "我是猪" << endl;
}
int main()
{
	add(10, 2);//其中第二个2只是进行占位，在函数中并不能发挥他的作用
	return 0;
}
//03函数重载
#include<iostream>
using namespace std;
//函数重载
//可以让函数名相同，提高复用性
//函数重载的条件
//1、同一个作用域上
//2、函数名称相同
//3、函数的参数类型不同，或个数不同，或顺序不同
void func()
{
	cout << "func 的调用" << endl;
}
void func(int a)
{
	cout << "func(int a) 的调用" << endl;
}
void func(double x)
{
	cout << "func(double x) 的调用" << endl;
}
void func(int a,double x)
{
	cout << "func(int a,double x) 的调用" << endl;
}
void func( double x,int a)
{
	cout << "func(double x,int a) 的调用" << endl;
}
//int func(int a, double x)//函数的返回类型，不能作为重载的条件
//{
//	cout << "func(int a,double x) 的调用" << endl;
//}
int main()
{
	func(3.15 ,1);//可以根据不同的参数类型，进行调用
	func();
	func(2);
	func(1, 3.14);
}
//04函数重载的注意事项(15)
#include<iostream>
using namespace std;
//1 引用作为重载的条件
void func(int& a)//如果把10传进来，int &a=10这个是不合法的
{
	cout << "func(int&a)的引用" << endl;
}
void func(const int& a)//类型不同，合法代码 const int&a=10，加了const可以给其一个合法的空间，使其合法
{//相当于 int tep=10;int &a=tep,只是我们找不到tep
	cout << "func(const int&a)的引用" << endl;
}
//函数重载的应用
void fun(int a)
{
	cout << "func(int a)的引用" << endl;
}
void fun(int a,int b=10)
{
	cout << "func(int a int b)的引用" << endl;
}
int main()
{
	//int a = 10;//由于a是变量，所以调用没有const的那个func
	//func(10);
	func(10);//这个是调用 const 的func
	//fun(10);//编译器不知道向那个里面传代码，所以出错啦 。

}