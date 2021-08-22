#include<iostream>
using namespace std;
//成员属性设置为私有
//1、可以控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
class person
{
public:
	//设置姓名
	void setname(string name)//这个是局内修改 name的函数
	{
		m_name = name;
	}
	//获取姓名
	string getname()//这个是对局外进行名字输出的函数
	{
		return m_name;
	}
	//获取年龄
	int getage()//这种东西相当于是一个函数，用return进行将其数值进行返回
	{
		//m_age = 0;
		return m_age;
	}
	void setage(int age)
	{
		if (age < 0 || age>150)//对年龄进行判断,不合适的话就return
		{
			m_age = 0;
			cout << "输入的年龄有误" << endl;
			return ;
		}
		m_age = age;
		return;
	}
	//设置情人
	void setlover(string lover)//只能对其进行设置这个情人，我们并不能对其进行访问
	{
		m_lover = lover;
	}
private:
	//姓名	可读可写
	string m_name;
	//年龄	只读
	int m_age;
	//情人	只写
	string m_lover;
};
int main()
{
	person p;
	p.setname("撸撸");
	cout << "姓名为 " <<p.getname() <<endl;
	cout << "年龄为：" << p.getage() << endl;
	p.setage(10);
	cout << "年龄为：" << p.getage() << endl;
	
}





