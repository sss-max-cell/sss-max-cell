#include<iostream>
using namespace std;
//函数调用重载，是非常灵活的，其形式不固定，可以是打印的函数重载，也可以是进行相加的等
class myprintf
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
	int operator()(int a, int b)
	{
		return a + b;
	}
};
class myadd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void printff(string www)
{
	cout << www << endl;
}
void test01()
{
	//这个是为函数的运算符的重载
	myprintf qq;
	qq("hello word");
	//这个是正常的打印函数
	printff("hello word");
}
void test02()
{
	myadd oo;
	int s=oo(2, 3);
	cout << s << endl;
	//下面的是，匿名函数的调用，myadd()(3,4)他就是匿名函数
	cout << myadd()(2, 4) << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}