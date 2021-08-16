#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	do
	{
		//进行条件判断
		int a = 0;
		int b = 0; 
		int c = 0;
		a = num % 10;//获取数字的个位；
		b = num / 10 % 10;//获取数字的十位    其中它的作用与这个一样a / 10/10 % 10 
		c = num / 100;//获取数字的百位；
		if (num==a*a*a+b*b*b+c*c*c)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
}
