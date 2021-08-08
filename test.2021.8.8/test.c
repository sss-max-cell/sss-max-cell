#define _CRT_SECURE_NO_WARNINGS
//001
#include <stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE*  pf= fopen("text .c", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	////写文件
	//fputc('b', pf);
	//fputc('i', pf);
	//fputc('t', pf);
	//读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
//002
#include<string.h>
#include<stdio.h>
struct s
{
	int a;
	float b;
	char arr[22];
};
int main()
{
	struct s p;
	fscanf(stdin, "%d %f %s",&(p.a),&(p.b),p.arr);//利用fscanf从键盘上输入数据
	fprintf(stdout, "%d %f %s", p.a, p.b, p.arr);//利用fprintf将数据打印到屏幕上
	return 0;
}
//003
#include<stdio.h>

struct s
{
		int a;
		float b;
		char arr[22];
};
int main()
{
	struct s p = { 2,3.14,"abcd" };
	char arr[201] = { 0 };
	sprintf(arr, "%d %f %s", p.a, p.b, p.arr);//从格式化中的数据读取字符串；
	printf("%s",arr);
	struct s d;
	sscanf(arr, "%d %f %s", &(d.a),&(d.b),d.arr);//从字符串中读取字符串格式化的数据
	printf("%d %f %s", d.a, d.b, d.arr);
	return 0;
}