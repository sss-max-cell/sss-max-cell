#define _CRT_SECURE_NO_WARNINGS
//01
#include<stdio.h>//为了区分函数和宏，需要将宏全部大写，而函数不要全部大写，用以进行区分
#define max(x,y) ((x++)>(y++)?(x++):(y++))
int main()
{
	int a = 10;//对于宏不要写带有副作用的参数，副作用的宏是A++之类的
	int b = 11;//传宏的需要计算好之后再传进去
	int ma = max(a, b);
	printf("%d\n", ma);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
//02
#include<stdio.h>
#define SIZEOF(aaa) sizeof(aaa)
int main()
{
	int ret = SIZEOF(int);//宏也可以计算，类型的大小。
	printf("%d\n", ret);
}
//03
#include<stdio.h>
#define sss(num,typ) (typ*)malloc(num*sizeof(typ))
int main()
{
	int* ret = (int*)malloc(10 * sizeof(int));
	int* p = sss(10, int);//其中宏也可以用于进行开辟空间
}
//04
#include<stdio.h>
#define MAX 100
int main()
{
	int a = MAX;
	printf("%d\n", a);
#undef MAX//用于将定义的宏进行解除。
	int b = MAX;
	return 0;
}
//05
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)//条件编译决定着你的代码，能不能被编译到，能不能被执行
	{
//#ifdef aaa//如果定义过aaa，代码就可以执行，如果没有定义过就不能执行。。。****其中这句代码可以用#if defined（aaa）来代替
#if 1//也可以用常量表达式进行判定是否可以执行
		printf("%d ", arr[i]);
#endif
 #if !defined(aaa)//反面
 #ifndef aaa//反面
	}
	return 0;
}
//06
#include<stdio.h>
int main()
{
#if 1==1//对于这种的多分支条件，编译可以用if进行判断，编译
	printf("haha");
#elif 1==2
	printf("hehe")
#else
	printf("heihei")
#endif
}
//07
#include<stdio.h>
int main()
{
#if defined(aaa)//嵌套编译，依次进行判断，看看能不能编译代码
	#ifdef(sss)
	printf("haha");
	#elif(ddd)
	printf("hehe");
	#else
	printf("hchc");
	#endif
#endif
}
//08
#include<stdio.h>//对于尖括号，到vc的库中查找
#include"add.h"//对于双引号，首先到本代码路径下查找，然后到vc的库中下查找
//09
#include<stdio.h>
int main()
{//这个代码，可以避免文件被重复引用，减少代码的使用
#ifndef _test_h_//进行判断，如果已经引用过这个文件的话，下面的代码就不再执行啦
#define _test_h_//进行声明这个文件
	int add(int x, int y);
#endif
#pragma once//用这个头文件，也可以保证，某个文件被引用一次
	int add(int x, int y);
	return 0;
}
//10
#include<stdio.h>
#include<stddef.h>
struct S
{
	char ss;
	int a;
	char xx;
};
#define OFFSETOF(stru_name,stru_num) (int)&(((stru_name*)0)->stru_num)//还可以这样进行转化计算
int main()
{
	printf("%d\n", OFFSETOF(struct S, ss));//其中的offsetof是计算偏移量的
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, xx));
	return 0;
}