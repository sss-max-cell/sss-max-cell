#include<iostream>
using namespace std;
//对于在正常的编写程序的过程中，一般不要编写2个这种东西，一般一个函数模板就够用啦


//普通函数与函数模板的调用规则
//1、如果函数模板与普通函数都可以调用，那么优先考虑普通函数
//2、可以通过空模板函数列表，强制调用函数模板
//3、函数模板也可以发生重载
//4、如果函数模板可以产生更好的匹配，优先调用函数模板

void printff(int a, int b)
{
	cout << "普通函数的调用" << endl;
}
template<typename T>
void printff(T a, T b)
{
	cout << "函数模板的调用" << endl;
}
template<typename T>
void printff(T a, T b,T c)
{
	cout << "函数模板重载的调用" << endl;
}
int main()
{
	//普通情况下，会直接调用普通函数的
	//而通过空模板参数列表，才可以进行调用
	int a=9;
	int b = 9;
	int c = 9;
	printff<>(a, b);
	printff(a, b, c);
	char c1 = 'q';
	char c2 = 'e';
	//这个由于如果调用普通的函数，还要发生隐式类型转换，不划算，
	//对应与上面的第四条,因此他选择调用函数模板
	printff(c1, c2);
	system("pause");
	return 0;
}