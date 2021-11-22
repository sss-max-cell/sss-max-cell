#include<iostream>
using namespace std;
//提前让编译器知道person类的实现
template<class T1, class T2>
class person;

/// <summary>
/// 
/// </summary>
/// <typeparam name="T1"></typeparam>
/// <typeparam name="T2"></typeparam>
/// <param name="p"></param>
//这个是随便点出来的

//如果全局函数，是类外实现的，需要提前让全局函数知道，因此把它放到前面
template<class T1, class T2>
void printff2(person<T1, T2> p)
{
	cout << p.m_age << endl;
	cout << p.m_name << endl;
}

template<class T1,class T2>
class person
{
public:
	//打印函数的类内实现啊
	friend void printff1(person<T1,T2> &p)
	{
		cout << p.m_age<<endl;
		cout << p.m_name << endl;
	}
	//加上friend后才是全局函数，不加的话不是全局函数


	//打印函数的类外实现
	//加空模板参数列表
	//如果全局函数，是类外实现的，需要提前让全局函数知道
	friend void printff2<>(person<T1, T2> p);
	person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

void test()
{
	person <string, int> p("tom", 33);
	printff1(p);
}
void test02()
{
	person<string, int>p("jj", 99);
	printff2(p);
}
int main()
{
	test();
	test02();
	system("pause");
	return 0;
}