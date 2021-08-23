#include<iostream>
using namespace std;
//构造函数的分类及调用
//分类
//按照参数分类  无惨构造（默认构造）    有参构造
//按照类型分类  普通构造			   拷贝构造
class person
{
public:
	person()//无参函数
	{
		
		cout << "person 无参构造函数的调用 " << endl;
	}
	person(int a)//有参函数
	{
		age = a;
		cout << "person 有参构造函数的调用 " << endl;
	}
	//拷贝构造
	person(const person& p)//限制不能把文件本体给改啦
	{
		//将传入的人身上的所有属性，拷贝到我身上。
		age=p.age;
		cout << "person 拷贝有参构造函数的调用 " << endl;
	}
	~person()
	{
		cout << "person 构造函数的调用 " << endl;
	}
	int age;
};
//调用
void test01()
{
	//1、括号法 这个比较好
	//person p1;//默认构造函数调用
	//person p2(10);//有参构造函数
	//person p3(p2);//拷贝构造函数
	//cout << "p2的年龄 " << p2.age << endl;
	//cout << "p3的年龄 " << p3.age << endl;
	//person p4();//编译器会把他认为是一个函数声明，不会在创建对象
	//2、显示法
	//person p1;//无参
	//person p2 = person(10);//有参
	//person p3 = person (p2);//拷贝
	person(10);//匿名对象，特点：当前执行结束后，系统会立即回收掉匿名对象
	cout << "aaaaa" << endl;
	//注意：不要利用拷贝构造函数  初始化匿名对象
	 	   //person(p3) 编译器会认为 person(p3)=====person p3;	
	//3、隐式转化法
	person p4 = 10;//相当于写了   person p4=person(10);
	person p5=p4//拷贝构造
}
int main()
{
	test01();
	system("pause");
}