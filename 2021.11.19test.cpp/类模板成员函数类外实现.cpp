#include<iostream>
using namespace std;
template<class T, class W>
class person
{
public:

	person(T name, W age);
	void showprint();
public:
	T m_name;
	W m_age;
};
//它的类外实现
//其中第一行的template<class T,class W>，他们是保证编译器认识T，W
//第二行在person前加<T, W>，标明是类模板的类外实现
template<class T,class W>
person<T, W>::person(T name, W age)
{
	m_name = name;
	m_age = age;
}
template<class T,class W>
void person<T, W>::showprint()
{
	cout << "年龄" << m_age;
	cout << "姓名" << m_name;
}
void test()
{
	person<string, int> p("tom", 11);
	p.showprint();
}
int main()
{
	test();
	system("pause");
	return 0;
}