//01求年龄的算法
#include<iostream>
using namespace std;
int main()
{
	int age(int);
	cout << age(6) << endl;
}
int age(int n)
{
	int c ;
	if (n == 1) c = 10;
	else c = age(n - 1) + 2;
	return c;
}

//02函数模板的运用
#include<iostream>
using namespace std;
template<typename T>//模板声明，其中T为类型参数
T max(T a, T b,T c)//定义一个通用函数，用T做虚拟的类型名
{
	if (b > a)a = b;
	if (c > a)a = c;
	return a;
}
int main()
{
	int a = 22; int b = 33; int c = 1;
	double d = 22.3; double e = 33.2; double f = 44.3;
	long h = 2983838377; long i = -918272773; long k = 927635511;
	int q = max(a, b, c);//调用函数，此时的T为int
	double w = max(d, e, f);//调用函数，此时的T为double
	long r = max(h, i, k);//调用函数，此时的T为long
	cout << "q= " << q << endl;
	cout << "w= " << w << endl;
	cout << "r= " << r << endl;
}

//03利用静态局部变量求阶乘
#include<iostream>
using namespace std;
int main()
{
	int fax(int a);
	int i = 0;
	for(i=1;i < 6; i++)
	{
		cout << i << "!=" << fax(i) << endl;
		
	}
}
int fax(int a)
{
	static int dd=1;
	dd = dd * a;
	return dd;

}

