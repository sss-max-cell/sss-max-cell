#define _CRT_SECURE_NO_WARNINGS
//001
#include<stdio.h>
int main()
{
	printf("%s\n",__FILE__ );//Ԥ������ţ����Դ�ӡ���ļ��ĵ�ַ
	printf("%d\n", __LINE__);//Ԥ������ţ����Դ�ӡ�����к�
	printf("%s\n", __DATE__);//Ԥ������ţ����Դ�ӡ����
	printf("%s\n", __TIME__);//Ԥ������ţ����Դ�ӡʱ��
	//��������д��־
	int arr[10] = { 0 };
	int i = 0;
	FILE* pf = fopen("daily", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "��%d�� file=%s date=%s time=%s %d\n",i,__FILE__, __DATE__, __TIME__,arr[i]);
	}
	fclose(pf);
	pf = NULL;
	printf("%s\n",__FUNCTION__ );//��ӡ���ڵ��ļ����֡�
	return 0;
}
// 002
#include<stdio.h>
int main()
{
	printf("%d\n", _STDC_);//Ԥ������ţ����Լ��������Ƿ���ѭc���Եı�׼�������ѭc���Եı�׼����᷵��1��������δ����
}
//003
#include<stdio.h>
#define max 21//#define �����ʶ��
#define str "hehe"
#define ret register//���治Ҫ�ӷֺţ����ܻ����
#define www for(;;)//��������Ҳ���Ե�
int main()
{
	ret int b = 3;//��ͬ��register int
	int a = max;
	printf("%d\n", a);//DY 21
	printf("%s\n", str);//DY hehe
	return 0;
}
// 004
#include<stdio.h>
#define sde(x) x*x//��Ķ���
int main()
{
	int a = 5;
	int c = sde(a);//�꣬����Ҫע������ʱ������š��겻�ܵݹ顣
	printf("%d\n", 25);
	return 0;
}
// 005
#include<stdio.h>
int main()
{
	printf("hello word\n");//��������ӡ�����Ľ��һ��
	printf("hello"" ""word\n");
	printf("hello"" ""word\n");
	return 0;
}
// 006
#include<stdio.h>
#define print(x) printf("the value "#x" is %d",x)
int main()
{
	int a = 0;//���ú���д�ӡ��ͬ������Ҫ�����ֵ
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
	int sssaaa = 2021;//##���������������ߵĺϳ�һ��,����ʹ��
	printf("%d\n", xxx(sss, aaa));
}