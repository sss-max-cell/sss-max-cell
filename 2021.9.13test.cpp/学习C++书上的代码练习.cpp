//01��������㷨
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

//02����ģ�������
#include<iostream>
using namespace std;
template<typename T>//ģ������������TΪ���Ͳ���
T max(T a, T b,T c)//����һ��ͨ�ú�������T�������������
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
	int q = max(a, b, c);//���ú�������ʱ��TΪint
	double w = max(d, e, f);//���ú�������ʱ��TΪdouble
	long r = max(h, i, k);//���ú�������ʱ��TΪlong
	cout << "q= " << q << endl;
	cout << "w= " << w << endl;
	cout << "r= " << r << endl;
}

//03���þ�̬�ֲ�������׳�
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

