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
	struct S s = { "����",19,99.9 };
	FILE* pf = fopen("test.txt", "w");//�������ļ�
	if (pf == NULL)//���а�ȫ�ж�
	{
		return 0;
	}
	fwrite(&s, sizeof(struct S), 1, pf);//�Զ����Ƶ���ʽ���д洢�������Զ����ƴ洢�����ַ��洢��һ��
	printf("%s", pf);//����������ӡ����Ȼ�﷨û�д���
	fclose(pf);//�ر��ļ�
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
	FILE* pf = fopen("test.txt", "rb");//��һ�������Ƶ��ļ���ֻ����
	fread(&tmp, sizeof(struct S), 1, pf);//��pf�е��Զ����Ƶ���ʽ���ڵ����ݣ�ת�Ƶ�tmp ��
	printf("%s %d %lf", tmp.arr, tmp.a, tmp.c);
	fclose(pf);
	pf = NULL;
}
//03
#include<stdio.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");//��test.txt���ļ������з��ļ��ڲ�Ϊabcde
	if (pf == NULL)
	{
		return 0;
	}
	//��λ�ļ�ָ��
	fseek(pf, 2, SEEK_CUR);
	//��ȡ�ļ�
	int ch=fgetc(pf);
	printf("%c\n", ch);//��ӡ�����ַ�
	int c=ftell(pf);//�����ļ�ƫ�����ö���
	printf("%d\n", c);
	rewind(pf);//���԰�ָ���ƶ�����ʼλ��
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
		perror("hehe\n");//�ж�ʧ�ܵ�ԭ��
		return 0;
	}
	int c = 0;
	while ((c = fgetc(pf)) != EOF)
	{
		printf("%c", c);//������ĵȼ�
		//putchar(c);
	}
	if (ferror(pf))//�ж��Ƿ���һ�����������Ƿ���ִ�������еĻ����ط��㣬���򷵻��㣻
	{
		printf("�м������\n");
	}
	else if(feof(pf))//�����ȡ��������򷵻�1.���򷵻���
	{
		printf("��ȡ�������\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}