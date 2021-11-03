#include<iostream>
using namespace std;
//浅拷贝：简单的赋值操作
//深拷贝：在堆区重新申请空间，进行拷贝构造操作
class person
{
public:
	person(int age, int height)
	{
		m_age = age;
		m_height = new int (height);
	}
	~person()
	{
		if (m_height != NULL)//由于程序员在堆区申请了空间，因此我们需要对其进行删除操作
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "person析构函数的调用" << endl;
	}
	person(const person& p)
	{
		m_age = p.m_age;
		//浅层的拷贝
		// m_height=p.m_height;就是简单的赋值操作。
		//深层的拷贝
		m_height = new int (*p.m_height);//由于产生了重复删除操作，因此进行在开辟空间。
		cout << "person拷贝构造函数的调用" << endl;
	}
	
	int m_age;
	int *m_height;//创建一个身高对象，将其放到堆区，其定义的变量是地址
};
void test01()
{
	person p(21, 180);
	cout << "p的年龄为" << p.m_age << "p的身高为" << *(p.m_height) << endl;
	person p1(p);
	cout << "p1的年龄为" << p1.m_age << "p1的身高为" << *(p1.m_height) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}