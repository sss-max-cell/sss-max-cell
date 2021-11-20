#include<iostream>
using namespace std;
template<class T,class W>
class base
{
	
};
//第一种方法子类继承父类的写法
//其中第一种方法，主要
class son :public base<int,char>
{
public:
	 
};
void test01()
{
	son a1;
}
//第二种方法子类继承父类的方法,灵活的继承父类中的对象
template<class T1,class T2>
class son2 :public base<T1>
{
	T2 aa;
};
void test02()
{
	son2 <int, char>s2;//定义的对象
}
int main()
{
	system("pause");
	return 0;
}