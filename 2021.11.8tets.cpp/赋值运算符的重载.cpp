#include<iostream>
using namespace std;
class person
{
public:
	person(int a)
	{
		m_age = new int (a);//由于创建在堆区里的数据，需要程序员手动释放，故需要写析构函数
	}
	//调用此析构函数，由于重复的释放两次，因此编译器回发生蹦
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
		}
		m_age = NULL;
	}
	//重载赋值运算符
	person& operator=(person &p1)//p2.operate=(p1);
	{
		//m_age=p1.m_age //编译器提供的浅拷贝
		//先判断在p2上是否有数据，有的话先将其释放干净
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p1.m_age);
		return *this;//使这个式子可以连等
	}
public:
	int *m_age;
};
void test01()
{
	person p1 (18);
	cout << "p1的年龄为" << *p1.m_age << endl;
	person p2(20);
	p2 = p1;
	cout << "p2的年龄为" << *p2.m_age << endl;
	person p3(30);
	p3 = p2 = p1;
	cout << "p3的年龄为" << *p3.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}