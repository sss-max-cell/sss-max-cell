//01类的初步应用
#include<iostream>
//圆周率
const double PI = 3.14;
using namespace std;
//class 代表设计一个类
class Circle
{
	//访问权限
	//公共权限
public:
	int m_r;
	//属性
	//行为
	double calculate()//这两个东西要在一起才可以，体现出是一个类。
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类来创建个对象
	Circle c1;
	//给圆对象 的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculate() << endl;
}


//02类的应用
#include<iostream>
using namespace std;
class student//设计学生类
{
	//类中的 属性和行为都统称为 成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
public://公共权限

	//属性
	string m_name;//姓名
	int m_id;//学号
	//行为
	//显示姓名和学号
	void showStudent()
	{
		cout << "姓名：" << m_name << "    学号：" << m_id << endl;
	}
	void setname(string name)
	{
		m_name = name;
	}
	void setid(int iid)
	{
		m_id = iid;
	}
};
int main()
{
	//创建一个具体的学生  实例化对象
	student s1 ;
	s1.m_id = 02;
	s1.m_name = "鲁哈";
	s1.setname("陆欢");//用他也可以进行赋值的
	s1.setid(222222);
	//显示学生的信息
	s1.showStudent();
}


//03三种权限
#include<iostream>
using namespace std;
//访问权限
//三种
//公共权限 public			成员类内可以访问，类外可以访问
//保护权限 protected		成员类内可以访问，类外不可以访问	儿子可以访问父亲中的保护内容
//私有权限 private			成员类内可以访问，类外不可以访问	儿子不可以访问父亲的私有内容
//其中函数能不能被访问 都是一样的

class person
{
public:
	//公共权限
	string m_name;//姓名
protected:
	//保护权限
	string m_car;//汽车
private:
	//私有权限
	int m_password;//银行卡密码
public:
	void func()
	{
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};
int main()
{
	person p1;
	p1.m_name = "luha";
	//p1.m_car = "benchi"//保护权限内容 在类外访问不到
	//p1.m_password = 123;//私有权限的内容，在类外访问不到
}


//04class 与struct 的区别
#include<iostream>
using namespace std;
class c1
{
	int a; //默认权限是 私有
};
struct c2
{
	int b; //默认权限是 公共
};
int main()
{
	//struct 和 class区别
	//struct 默认权限是 公共
	//class  默认权限是 私有
	c1 a1;
	//a1.a = 100;//由于其在class里默认权限 这个在外面不能被访问
	c2 a2;
	a2.b = 100;//由于其在struct中默认权限是公共 这个在外面是可以被访问的
}