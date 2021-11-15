#include<iostream>
using namespace std;
//对于去普通的交换两个数据，需要进行的是自定义函数，但是那样的话
//类型就已经被确定啦，那样的话，由于数据类型多种多样，需要定义
//许多个函数啊，因此对于这个可以采用函数模板的方法，来进行解决
template<typename T>//其中template 可以替换成class
void myseap(T& a, T& b)//函数模板的要求是，这两行需要连接起来
{
	T tem;
	tem = b;
	b = a;
	a = tem;
}
void test()
{
	double a = 9.0;
	double b = 8.0;
	//这种交换方法，是在地址处进行的交换，因为函数里面加了&；
	//第一种方法啊，调用它，编译器自己会进行识别数据类型
	myseap(a, b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//第二种方法，自己给他数据类型,但是它不是强制数据类型的转化
	myseap<double>(a, b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}
//注意事项
//1.自动类型数据推导，必须推导出一致的数据类型，才可以使用数据T
//2.模板必须明确T的数据类型，才可以使用
int main()
{
	test();
	system("pause");
	return 0;
}