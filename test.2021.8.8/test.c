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
	////д�ļ�
	//fputc('b', pf);
	//fputc('i', pf);
	//fputc('t', pf);
	//��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//�ر��ļ�
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
	fscanf(stdin, "%d %f %s",&(p.a),&(p.b),p.arr);//����fscanf�Ӽ�������������
	fprintf(stdout, "%d %f %s", p.a, p.b, p.arr);//����fprintf�����ݴ�ӡ����Ļ��
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
	sprintf(arr, "%d %f %s", p.a, p.b, p.arr);//�Ӹ�ʽ���е����ݶ�ȡ�ַ�����
	printf("%s",arr);
	struct s d;
	sscanf(arr, "%d %f %s", &(d.a),&(d.b),d.arr);//���ַ����ж�ȡ�ַ�����ʽ��������
	printf("%d %f %s", d.a, d.b, d.arr);
	return 0;
}