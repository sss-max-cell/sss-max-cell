//01���þ�̬������ӡ�׳�
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
	static int f = 1;//���þ�̬������ʹf�ļ��������Ա�������
	f = f * a;
	return f;
}

//02�������鴦��Ʊ����˵��
#include<iostream>//�Լ����ģ�ֻ�������Ҷ���ģ�
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

//����ı�׼��
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

03����2*3�Ķ�ά����a���к���Ԫ�ػ������浽һ��3*2�Ķ�ά����b��
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
			b[j][i]=a[i][j] ;//��һ�����ǽ������齻���Ĺؼ�
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
void copy(int c[2][3])//����Ǵ�ӡ�����
{
	int i;
	int j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << c[i][j];
		}
		cout << endl;//��ӡ��ά�����ʱ����Ҫ�����д�ӡ���У��Ǿ���Ҫ����������з�
	}
}

