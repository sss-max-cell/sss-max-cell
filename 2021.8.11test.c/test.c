#define _CRT_SECURE_NO_WARNINGS
//01
#include<stdio.h>//Ϊ�����ֺ����ͺ꣬��Ҫ����ȫ����д����������Ҫȫ����д�����Խ�������
#define max(x,y) ((x++)>(y++)?(x++):(y++))
int main()
{
	int a = 10;//���ں겻Ҫд���и����õĲ����������õĺ���A++֮���
	int b = 11;//�������Ҫ�����֮���ٴ���ȥ
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
	int ret = SIZEOF(int);//��Ҳ���Լ��㣬���͵Ĵ�С��
	printf("%d\n", ret);
}
//03
#include<stdio.h>
#define sss(num,typ) (typ*)malloc(num*sizeof(typ))
int main()
{
	int* ret = (int*)malloc(10 * sizeof(int));
	int* p = sss(10, int);//���к�Ҳ�������ڽ��п��ٿռ�
}
//04
#include<stdio.h>
#define MAX 100
int main()
{
	int a = MAX;
	printf("%d\n", a);
#undef MAX//���ڽ�����ĺ���н����
	int b = MAX;
	return 0;
}
//05
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)//���������������Ĵ��룬�ܲ��ܱ����뵽���ܲ��ܱ�ִ��
	{
//#ifdef aaa//��������aaa������Ϳ���ִ�У����û�ж�����Ͳ���ִ�С�����****���������������#if defined��aaa��������
#if 1//Ҳ�����ó������ʽ�����ж��Ƿ����ִ��
		printf("%d ", arr[i]);
#endif
 #if !defined(aaa)//����
 #ifndef aaa//����
	}
	return 0;
}
//06
#include<stdio.h>
int main()
{
#if 1==1//�������ֵĶ��֧���������������if�����жϣ�����
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
#if defined(aaa)//Ƕ�ױ��룬���ν����жϣ������ܲ��ܱ������
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
#include<stdio.h>//���ڼ����ţ���vc�Ŀ��в���
#include"add.h"//����˫���ţ����ȵ�������·���²��ң�Ȼ��vc�Ŀ����²���
//09
#include<stdio.h>
int main()
{//������룬���Ա����ļ����ظ����ã����ٴ����ʹ��
#ifndef _test_h_//�����жϣ�����Ѿ����ù�����ļ��Ļ�������Ĵ���Ͳ���ִ����
#define _test_h_//������������ļ�
	int add(int x, int y);
#endif
#pragma once//�����ͷ�ļ���Ҳ���Ա�֤��ĳ���ļ�������һ��
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
#define OFFSETOF(stru_name,stru_num) (int)&(((stru_name*)0)->stru_num)//��������������ת������
int main()
{
	printf("%d\n", OFFSETOF(struct S, ss));//���е�offsetof�Ǽ���ƫ������
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, xx));
	return 0;
}