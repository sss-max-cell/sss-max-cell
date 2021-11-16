#include<iostream>
using namespace std;
//类模板作为函数参数的三种传入方式
template<class T1,class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void show()
	{
		cout << m_age;
		cout << m_name;
	}
	T1 m_name;
	T2 m_age;
};
//1、指定传入类型
void showw(person<string, int>&p1)
{
	p1.show();
}
void test01()
{
	person <string ,int>p1("孙悟空", 111);
	showw(p1);
}
//2、参数模板化
template<class T1,class T2>
void showw2(person<T1,T2>& p1)
{
	p1.show();
	//看T1，T2的类型的方法
	cout << "T1的类型 " << typeid(T1).name() << endl;
	cout << "T2的类型 " << typeid(T2).name() << endl;
}
void test02()
{
	person <string, int>p2("猪八戒", 222);
	showw2(p2);
}


//3、整个类模板化
template<class T>
void showw3(T& p1)
{
	p1.show();
	cout << "T的类型 " << typeid(T).name() << endl;
	
}
void test03()
{
	person <string, int>p3("唐僧", 333);
	showw3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}