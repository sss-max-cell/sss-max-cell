#include<iostream>
using namespace std;
class father
{
public:
	father()
	{
		cout << "father构造函数的调用" << endl;
	}
	~father()
	{
		cout << "father析构函数的调用" << endl;
	}
};
class son :public father
{
public:
	son()
	{
		cout << "son构造函数的调用" << endl;
	}
	~son()
	{
		cout << "son析构函数的调用" << endl;
	}
};
void test()
{
	son pp;
}
int main()
{
	test();
	system("pause");
	return 0;
}
//继承中的构造和析构的顺序如下
//father构造函数的调用
//son构造函数的调用
//son析构函数的调用
//father析构函数的调用
//简单来记：白发人送黑发人
//创建子类对象也会创建父类对象