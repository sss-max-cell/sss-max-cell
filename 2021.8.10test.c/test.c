#define _CRT_SECURE_NO_WARNINGS
//001
#include<stdio.h>
int main()
{
	printf("%s\n",__FILE__ );//预定义符号，可以打印出文件的地址
	printf("%d\n", __LINE__);//预定义符号，可以打印出来行号
	printf("%s\n", __DATE__);//预定义符号，可以打印日期
	printf("%s\n", __TIME__);//预定义符号，可以打印时间
	//可以用来写日志
	int arr[10] = { 0 };
	int i = 0;
	FILE* pf = fopen("daily", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "第%d次 file=%s date=%s time=%s %d\n",i,__FILE__, __DATE__, __TIME__,arr[i]);
	}
	fclose(pf);
	pf = NULL;
	printf("%s\n",__FUNCTION__ );//打印所在的文件名字。
	return 0;
}
// 002
#include<stdio.h>
int main()
{
	printf("%d\n", _STDC_);//预定义符号，可以检测编译器是否遵循c语言的标准，如果遵循c语言的标准，则会返回1，否则是未定义
}
//003
#include<stdio.h>
#define max 21//#define 定义标识符
#define str "hehe"
#define ret register//后面不要加分号，可能会出错
#define www for(;;)//定义这种也可以的
int main()
{
	ret int b = 3;//等同于register int
	int a = max;
	printf("%d\n", a);//DY 21
	printf("%s\n", str);//DY hehe
	return 0;
}
// 004
#include<stdio.h>
#define sde(x) x*x//宏的定义
int main()
{
	int a = 5;
	int c = sde(a);//宏，里面要注意在有时候加括号。宏不能递归。
	printf("%d\n", 25);
	return 0;
}
// 005
#include<stdio.h>
int main()
{
	printf("hello word\n");//这三个打印出来的结果一样
	printf("hello"" ""word\n");
	printf("hello"" ""word\n");
	return 0;
}
// 006
#include<stdio.h>
#define print(x) printf("the value "#x" is %d",x)
int main()
{
	int a = 0;//利用宏进行打印不同数据需要输出的值
	int b = 9;
	print(a);
	print(b);
	return 0;
}
//007
#include<stdio.h>
#define xxx(x,y) x##y
int main()
{
	int sssaaa = 2021;//##操作符把左右两边的合成一个,进行使用
	printf("%d\n", xxx(sss, aaa));
}