#include<iostream>
using namespace std;
class basepage
{
public:
	void head()
	{
		cout << "首页，教研团队，全国分校，报名流程等" << endl;
	}
	void toe()
	{
		cout << "技术指导，合作联系，建议提出" << endl;
	}
	void leaf()
	{
		cout << "java,python,c/c++等" <<endl;
	}
};
//继承的好处，减少重复代码
//语法：class 子类：继承方式 父类
//子类  也称为派生类
//父类  也成为了基类
class java:public basepage
{
public:
	void content()
	{
		cout << "java的加载页面：" << endl;
	}
};
class python :public basepage
{
public:
	void content()
	{
		cout << "python的加载页面：" << endl;
	}
};
class cpp : public basepage
{
public:
	void content()
	{
		cout << "cpp的加载页面：" << endl;
	}
};
void test()
{
	//java 
	java jv;
	jv.content();
	jv.head();
	jv.leaf();
	jv.toe();
	cout << "----------------" << endl;
	//pathon
	python pa;
	pa.content();
	pa.head();
	pa.leaf();
	pa.toe();
	cout << "----------------" << endl;
	//cpp
	cpp cc;
	cc.content();
	cc.head();
	cc.leaf();
	cc.toe();
	cout << "----------------" << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}