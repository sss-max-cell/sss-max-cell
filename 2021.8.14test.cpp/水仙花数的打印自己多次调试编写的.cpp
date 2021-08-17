//自己编写的求水仙花的方法，自己编写的经过了多次的调试。加油
#include<iostream>
//水仙花数，就是其每个位置上的数的3次方的和等于他的本身
using namespace std;
int main()
{
	cout << "本期任务：用do while循环打印出来所有的三位数的水仙花数" << endl;
	int i =153;
	do
	{
		int count = 0;
		int sum = 0;
		int zz = i;
		do
		{
			int a = 0;
			a = i % 10;
			sum =sum+ a * a * a;
			i=i / 10;
			count++;
			if (count == 3)
			{
				if (sum == zz)
				{
					cout << sum << endl;
				}
			}
			
		} while (i>0);
		i = zz;
		i++;
	} while (i<1000);
}