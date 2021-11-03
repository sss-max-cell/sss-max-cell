#include<iostream>
using namespace std;
#include<string>
//类对象作为类成员
class phone
{
public:
	phone(string namephone)
	{
		M_nphone = namephone;
	}
	string M_nphone;
};
class person
{
public:
	//进行赋值操作
	//其中m_pname(pname)等价于，phone M_pname=pname;
	person(string name, string pname) :M_name(name), M_pname(pname)
	{

	}
	//定义人的姓名，极其的手机
	string M_name;
	//定义手机
	phone M_pname;
};
//当其他类作为自己类的对像时，先构造其他的类，在构造自己的类.析构的顺序与他相反
//构造时：先孩子，后母体。析构时：先母体，后孩子
void test01()
{
	person p("张三", "iphone 13");
	cout << p.M_name << "拿着"<<p.M_pname.M_nphone << endl;//由于为两个对象，故需要用两个.
}
int main()
{
	test01();
	system("pause");
	return 0;
}