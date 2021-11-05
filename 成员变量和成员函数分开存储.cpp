#include<iostream>
using namespace std;
//成员变量与成员函数是分开存储的
class person 
{
public:
	int a;//非静态成员变量，属于类上的对象
	static int b;//静态成员变量，不属于类上的对象
	void func01() {};//静态成员函数，不属于类上的对象
	static void func02() {};//静态成员函数，不属于类上的对象
	//需要记住只有非静态成员变量，才属于类上的对象
};
int person::b = 0;
void test01()
{
	person p;
	cout << "输出空对象占得空间" << endl;
	//系统会给他一个空间1个字节，是为了区分空对象占得位置，每个空对象都会占有一个独特的位置
	cout << sizeof(p) << endl;//1
}
void test02()
{
	person p;
	cout << sizeof(p) << endl;//测量里面加入对象后所占的内存空间
}
int main()
{
	///test01();
	return 0;
}