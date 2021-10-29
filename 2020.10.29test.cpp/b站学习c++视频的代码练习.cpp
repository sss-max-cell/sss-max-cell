////1.构造函数：相当于进行数据初始化的操作，可以发生重载
////2.析构函数：相当于对数据进行销毁操作，没有参数在括号内
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	//构造函数
//	//1.没有函数值，也不用写void
//	//2.函数名与类名相同
//	//3.构造可以有参数，也可以发生重载
//	//4.创建对像时，构造函数会调用一次，而且只调用一次
//	person()//创建一个构造函数，这个构造函数隶属于person所以名称需要为person
//	{
//		cout << "person构造函数的调用" << endl;
//	}
//	//析构函数
//	//1.没有函数值，也不用写void
//	//2.函数名与类名相同,在前面加上~
//	//3.构造不可以有参数，也不可以发生重载
//	//4.创建对像时，构造函数会调用一次，而且只调用一次
//	~person()//对于析构函数，必须在这个函数进行完之后，才可以进行调用
//	{
//		cout << "person析构函数的应用" << endl;
//	}											
//};
////构造函数与析构函数都是必须有的，如果我们自己不提供，那么编译器将会自己提供，只不过是空的
//void test01()
//{
//	person p;//在栈上的对象，test01执行完会进行释放。
//}
//int main()
//{
//	test01();
//}


#include<iostream>
using namespace std;
class person
{
public:
	static int m_age;
};
int m_age person:: = 100;
int main()
{

}