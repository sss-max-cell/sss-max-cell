#include<iostream>
using namespace std;
//构造函数的分类及调用
//分类
//按照参数分类：有参（默认）和无参
//按照类型分类：普通和拷贝
class person
{
public:
	//构造函数
	person()
	{
		cout << "person无参构造函数的调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person有参构造函数的调用" << endl;
	}
	~person()
	{
		cout << "person析构函数的调用" << endl;
	}
	//拷贝构造函数
	person(const person& p)
	{
		//将所有属性拷贝到我身上
		age=p.age;
		cout << "person拷贝函数的调用" << endl;
	}
	int age;
};
//调用
void test01()
{
	//1.括号法，这个方法比较好
	//person p1;//默认构造函数的调用
	//person p2(18);
	//person p3(p2);
	//注意事项
	//1,调用默认构造函数时，不要加小括号，加小括号会让计算机认为是，函数的声明
	/*cout << "p2的年龄：" << p2.age << endl;
	cout << "p3的年龄：" << p3.age << endl;*///这个利用拷贝构造函数
	//2.显示法
	person p1;
	person p2 = person(10);//有参构造
	person p3 = person(p2);//拷贝构造
	//注意事项：
	//person(10);//匿名对象，当前行执行结束后，系统会立即释放后.他相当于有参构造
	//不要利用拷贝构造函数，初始匿名对象，编译器会认为person(p3)===person p3 会造成重复定义
	//3.隐式转换法
	person p4 = 10;//相当于person p4=person(10);//有参构造
	person p5 = p4;//拷贝构造
}
int main()
{
	test01();
	system("pause");
	return 0;
}