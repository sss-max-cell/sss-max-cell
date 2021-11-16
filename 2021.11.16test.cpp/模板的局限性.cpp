#include<iostream>
using namespace std;
//对于函数模板来说，他并不是万能的，加入传入person数具类型，
//他就不会进行判断啦，这节课针对这个问题将进行探究
class person
{
public:
	//这个ppublic：一定要加上，因为不加的话，可能认为他是私有的，那么调用这个
	//构造函数的时候，就会报错
	person(string name,int age)
	{
		m_age = age;
		m_name = name;
	}
public:
	int m_age;
	string m_name;
};
template<class T>
bool sweap(T &a,T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//对于上面叙述的问题，我们可以将它用下面的方法进行解决
//或者采用 运算符重载的方法，都是可以的
template<>bool sweap(person &a, person &b)
{
	if (a.m_age == b.m_age && a.m_name == b.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}  
void test()
{
	person p1("tt",22);
	person p2("tt",22);
	bool ret=sweap(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}