#include<iostream>
using namespace std;
class person
{
public:
							//常函数
	//其内部含有一个this指针，其指向不可以改变，但是其指向的值是可以改变的.
	//在其后面加上const，保证了其值不能被改变。
	//const int*p   此是其指向的值不能被改变/int const *P  此是其指向的对象不能被改变
	void personss()const
	{
		//m_age = 100;
		//this = NULL;
		m_age2 = 222;
	}
	void func()
	{

	}
	int m_age;
	mutable int m_age2;//这时一个特殊的变量，即使在有const的情况下，也可以被修改
};
void test02()
{
	//常对象
	const person p;
	//p.m_age = 11;//其里面的值不能被修改
	p.m_age2 = 222;//由于age2前有mutable，因此可以进行修改
	//常对象只能调用常函数
	p.personss();
	//p.func();因为是这个函数可以修改变量，由于这个对象不允许修改变量，因此不兼容，故会报错
}
int main()
{
	system("pause");
	return 0;
}