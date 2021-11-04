#include<iostream>
using namespace std;
class person
{
public:
	void personname()
	{
		cout << "person显示名字函数的调用" << endl;
	}
	void personage()
	{
		if (this == NULL)//这行代码判断this是不是指向空指针，避免编译器崩了
		{
			return ;
		}
		cout << "年龄为 " <<this-> m_age << endl;//其实要显示this指针就要进行这个变形
	//此时this指向的空指针，根本无法进行访问m_age，因此会发生错误
	}
	int m_age;
};
void test01()
{
	person* p = NULL;
	p->personname();
	p->personage ();
}
int main()
{
	test01();
	system("pause");
	return 0;
}