#include<iostream>
using namespace std;
template<class NameType, class AgeType=int>
class person
{
public:
	person(AgeType age, NameType name)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void showbase()
	{
		cout << this->m_name;
		cout << m_age;
	}
	NameType m_name;
	AgeType m_age;
};
void test()
{
	//1、类的函数模板，只能用指定的类型方式,他自己不知道什么数据类型
	//需要人给他，傅上去.t他没有自动推导的功效
	person<string,int> p1(18, "汉子");
	p1.showbase();
	//2、类模板在参数列表中可以有默认的形式
	person<string> p2(18, "汉子");
	p2.showbase();
}
int main()
{
	test();
	system("pause");
	return 0;
}

//类模板中，函数的调用时机
//类模板中只有函数，再被调用时，才会创建这个函数