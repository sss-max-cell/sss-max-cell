#include<iostream>
using namespace std;
//1.对于普通函数，它可以发生隐式转换
//2.对于函数模板，它默认情况下，不可以发生隐式转换
//3.对于函数模板，它在指定类型的情况下可以发生隐式转换
int  addfunction(int a,int b)
{
	return a+ b;
}
 template <typename T>
 T add2(T a, T b)
 {
	 return  a + b;
 }
void test01()
{
	int a = 10;
	int b = 10;
	char c = 'c';//c的ascall码值是99,99+10=109；
	cout << addfunction(a , c )<< endl;

	//自动类型推导
	//cout << add2(a ,c) << endl;   这个是不行的
	//显示指定类型
	cout << add2<int>(a, c) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}