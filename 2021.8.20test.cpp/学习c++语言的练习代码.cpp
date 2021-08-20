//01
//#include<iostream>
//using namespace std;
////创建于函数外部的变量是全局变量
//int g_a = 10;//这两个就是全局变量
//int g_b = 10;
//const int c_g_a = 10;//这两个是const修饰的全局变量
//const int c_g_b = 10;
//int main()//创建于函数内部的变量是局部变量，放在栈区
//{
//	//局部变量
//	int a = 10;
//	int b = 10;
//	cout << (int)&a << endl;
//	cout << (int)&b << endl;
//	//全局区
//	//全局变量、静态变量、常量，这些属于全局区中
//	//静态变量
//	static int s_a = 10;//这两个就是静态变量
//	static int s_b = 10;
//	cout << (int)&s_a << endl;
//	cout << (int)&s_b << endl;
//	//全局变量
//	cout << (int)&g_a << endl;
//	cout << (int)&g_a << endl;
//	//常量
//	//字符串常量
//	char arr[20] ="hello word";//这种字符串是局部变量
//	cout << (int)&arr << endl;
//	cout <<(int) &"hello word"<< endl;//这种字符串放在全局区
//	//const 修饰的常量
//	//const修饰的全局变量
//	cout << (int)&c_g_a << endl;
//	cout << (int)&c_g_a << endl;
//	//const修饰的局部变量,,这些不放在全局区。记住只要含有局部就不在全局区
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << (int)&c_l_a << endl;
//	cout << (int)&c_l_b<< endl;
//}
//02
//#include<iostream>
//using namespace std;
////栈区数据的注意事项———不要返回局部变量的地址
////栈区的数据由编译器管理开辟和释放
////栈区存放，局部变量、形参，用完就会被释放。
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;//第一次可以打印正确的数字，因为编译器做了保留
//	cout << *p << endl;//第二次这个数据就不在保留，因为栈区的局部变量，用完就会被释放。
//}
//03
//#include<iostream>
//using namespace std;
////堆区，由 程序员来进行开辟和释放的，如果程序员忘记释放，那么最后系统会进行释放
//int* func()
//{
//	//利用NEW关键字，可以将数据开辟到堆区
//	//指针本质也是局部变量，放在栈上，指针保存的数据放在了堆区
//	int *p=new int(10);
//	return p;
//}
//int main()
//{
//	int* a = func();
//	cout << *a<< endl;
//	cout << *a << endl;
//}
//04对于开辟数组的研究，讲解
//#include<iostream>
//using namespace std;
//int* func()
//{
//	//在堆区创建整形数据
//	//new返回的是 该数据类型的指针
//	int* p = new int(10);
//	return p;
//}
//void test()
//{
//	//在堆区创建10整型的数组
//	int* arr = new int[10];//10代表数组有10个整型元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放堆区的数据
//	//释放数组是要加一个[]
//	delete[]arr;
//}
//	void main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区的数据要想释放，利用关键字delete
//	delete p;
//	//cout << *p << endl;//内存已经释放，在进行访问就是非法操作
//	test();
//}
//05引用，就是给变量取别名
//#include<iostream>
//using namespace std;
//int main()
//{
//	//引用的基本语法
//	int a = 10;
//	int& b = a;//引用只是，对于变量取了别的名字。并不会给他新开辟空间，所以一个改变另一个也会改变
//	cout << a << endl;//引用上来就需要，给他进行初始化，b已经作为a的别名，那么他就不能在做其他的别名啦
//	cout << b << endl;//如果强行，改变引用，那么只是赋值操作，并不是修改引用的对象
//	b = 100;
//	cout << a << endl;
//	cout << b << endl;
//	a = 11;
//	cout << a << endl;
//	cout << b << endl;
//}
//06引用坐函数参数
//#include<iostream>
//using namespace std;
////交换两个数的函数
//void swap(int &z,int &x)//这个是引用传递，可以进行交换两个数值的值
//{
//	int v = 0;
//	v = z;
//	z = x;
//	x = v;
//}
//int main()
//{
//	int a = 9;
//	int b = 2;
//	/*int &s = a;
//	int &f = b;*/
//	swap(a, b);
//	cout << a << endl;
//	cout << b << endl;
//}

//#include<iostream>
//using namespace std;
////引用做函数值的返回类型
//int& test()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	//1、不要返回局部变量的引用
//	//2、函数的调用可以作为左值
//	int& ret = test();
//	cout << ret<<endl;
//	cout << ret << endl;
//	test() = 1000;//进行的左值操作
//	cout << ret << endl;
//	cout << ret << endl;
//
//}
#include<iostream>
using namespace std;
void showvalue(const int& val)//可以上面加上一个 const进行限制修改val
{
	cout << val << endl;//如果改变里面的值，外面的也能被改
}
int main()
{
	//const int& ref = 10;//引用后面不能直接放一个常数，而这样做可以的原因是编译器进行了改变，
	////变成了 int tem=10; int &ref=tem;我们找不到原名
	////ref=20;//加入const后不能被修改啦
	int a = 10;
	showvalue(a);
}