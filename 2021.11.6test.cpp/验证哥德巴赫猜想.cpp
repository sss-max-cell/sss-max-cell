//验证哥德巴赫猜想:任何一个不小于6的偶数均可以表示为两个奇素数之和。例如:6=3+3，8=3+5，...，24=5+19，50=3+47，50=7+43，...，50=47+3.
//编写程序，输入一个偶数m，验证m能被表示成两个素数之和，只输出一种满足条件的组合。其中一个素数必须是满足要求的最小的素数。素数就是只能被1和自身整除的正整数。输入说明:
//个正大于等于6的偶数n输出说明:
//输出n = n1 + n2的式子，其中n是输入的数，n1，n2是满足条件的素数，且n1是满足条件的素数中最小的素数。 Smaple Input
//50
//Sample Output
//50 = 3 + 47
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int c;
	int m1;
	int m2;
	int putnumber;
	int i = 0;
	//for(putnumber=6;; putnumber++)
	printf("请输入一个大于六的偶数\n");
	scanf("%d", &putnumber);
	for (i = 2; i < putnumber; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)//验证输出的是素数，而不是非素数跳出来的
		{
			m1 = i;
			m2 = putnumber - i;
			for ( c = 2; c < putnumber; c++)
			{
				if (m2 % c == 0)
					break;
			}
			if (m2 == c)//验证是否为素数，避免中间的数值出来
			{
				printf("您输入的数值的哥德巴赫猜想的数是%d=%d+%d", putnumber, m1, m2);
				return 0;
			}

		}

	}
}