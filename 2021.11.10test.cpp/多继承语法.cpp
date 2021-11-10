#include<iostream>
using namespace std;
class father1
{
public:
	father1()
	{
		m_a = 111;
	}
	int m_a;

};
class father2
{
public:
	father2()
	{
		m_a = 222;
	}
	int m_a;
};
//多继承语法，在下一行，一般不会在开发大型项目时，运用这种方法
class son :public father1,public:: father2//如果不加public 系统认为是private
{
public:
	int m_c;
	int m_d;

};

void test()
{
	son qq;
	cout << "son自己所占的空间" << sizeof(qq);//16
	cout << "father1下的m_a" << qq.father1::m_a << endl;
	cout << "father2下的m_a" << qq.father2::m_a << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}