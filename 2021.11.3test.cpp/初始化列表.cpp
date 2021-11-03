#include<iostream>
using namespace std;
//初始化列表
class person
{
public:
	//传统初始化方法
	//person(int a, int b, int c)//构造函数用于给类内的变量赋初值
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//初始化列表初始的方法
	//person() :m_a(10), m_b(20), m_c(30),标准初始化列表方法
    person(int a,int b,int c):m_a(a), m_b(b), m_c(c)
    {

    }
	int m_a;
	int m_b;
	int m_c;
};
void test01()
{
	//person p(10, 20, 30);
	person p(30,20,10);//新创建个对象p，p的作用会调用第15行的函数，进行初始化列表方法进行初始化
	cout << "m_a的年龄 " << p.m_a << endl;
	cout << "m_b的年龄 " << p.m_b << endl;
	cout << "m_c的年龄 " << p.m_c << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}