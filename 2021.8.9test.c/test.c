#define _CRT_SECURE_NO_WARNINGS
//01
#include<stdio.h>
struct S
{
	char arr[22];
	int a;
	double c;
};
int main()
{
	struct S s = { "张三",19,99.9 };
	FILE* pf = fopen("test.txt", "w");//建立新文件
	if (pf == NULL)//进行安全判定
	{
		return 0;
	}
	fwrite(&s, sizeof(struct S), 1, pf);//以二进制的形式进行存储，张三以二进制存储或者字符存储都一样
	printf("%s", pf);//不能这样打印，虽然语法没有错误
	fclose(pf);//关闭文件
	pf = NULL;
	return 0;
}
//02
#include<stdio.h>
struct S
{
	char arr[22];
	int a;
	double c;
};
int main()
{
	struct S tmp;
	FILE* pf = fopen("test.txt", "rb");//打开一个二进制的文件，只读！
	fread(&tmp, sizeof(struct S), 1, pf);//将pf中的以二进制的形式存在的数据，转移到tmp 中
	printf("%s %d %lf", tmp.arr, tmp.a, tmp.c);
	fclose(pf);
	pf = NULL;
}
//03
#include<stdio.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");//打开test.txt的文件。其中方文件内部为abcde
	if (pf == NULL)
	{
		return 0;
	}
	//定位文件指针
	fseek(pf, 2, SEEK_CUR);
	//读取文件
	int ch=fgetc(pf);
	printf("%c\n", ch);//打印单个字符
	int c=ftell(pf);//计算文件偏移量得多少
	printf("%d\n", c);
	rewind(pf);//可以吧指针移动到起始位置
	return 0;
}
//04
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("hehe\n");//判断失败的原因
		return 0;
	}
	int c = 0;
	while ((c = fgetc(pf)) != EOF)
	{
		printf("%c", c);//与下面的等价
		//putchar(c);
	}
	if (ferror(pf))//判断是否上一个操作结束是否出现错误，如果有的话返回非零，否则返回零；
	{
		printf("中间出错了\n");
	}
	else if(feof(pf))//如果读取到了最后，则返回1.否则返回零
	{
		printf("读取到了最后\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}