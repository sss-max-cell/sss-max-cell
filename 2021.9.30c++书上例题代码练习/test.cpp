//01运用静态变量打印阶乘
#include<iostream>
using namespace std;
int main()
{
	int fix(int a);
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		cout << i << "!=" << fix(i) << endl;
	}

}
int fix(int a)
{
	static int f = 1;//运用静态变量，使f的计算结果可以保留下来
	f = f * a;
	return f;
}

//02利用数组处理菲薄纳妾说列
#include<iostream>//自己做的，只不过是右对齐的；
#include<iomanip>
using namespace std;
int main()
{
	int a = 1;
	int b = 1;
	int i = 0;
	while (i<=20)
	{
		if (i < 2)
		{
			cout << setw(8) << a;
			i++;
			cout << setw(8) << b;
			i++;
		}
		else if (i >= 2)
		{
			if (i % 5 == 0)
				cout << "\n";
			a = a + b;
			b = a + b;
			cout << setw(8) << a;
			i++;
			if (i % 5 == 0)
				cout  << "\n";
			cout <<setw(8) << b;
			i++;
			if (i % 5 == 0)
				cout <<"\n" ;
		}
	}
}

//上题的标准版
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	int f[20] = { 1,1 };
	for (i = 2; i < 20; i++)
	{
		f[i] = f[i-2] + f[i - 1];
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0)
			cout << endl;
		cout << setw(8) << f[i];
	}

03交换2*3的二维数组a的行和列元素互换，存到一个3*2的二维数组b中
#include<iostream>
using namespace std;
int main()
{
	int a[2][3] = { 1,2,3,4,5,6 };
	int b[3][2] = { 0 };
	void copy(int c[2][3]);
	copy(a);
	int i = 0; 
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[j][i]=a[i][j] ;//这一步，是进行数组交换的关键
		}
	}
	copy(a);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << b[i][j];
		}
		cout <<endl;
	}

}
void copy(int c[2][3])//这个是打印数组的
{
	int i;
	int j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << c[i][j];
		}
		cout << endl;//打印二维数组的时候，需要他进行打印两行，那就需要加上这个换行符
	}
}

