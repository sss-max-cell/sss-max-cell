#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	do
	{
		//���������ж�
		int a = 0;
		int b = 0; 
		int c = 0;
		a = num % 10;//��ȡ���ֵĸ�λ��
		b = num / 10 % 10;//��ȡ���ֵ�ʮλ    �����������������һ��a / 10/10 % 10 
		c = num / 100;//��ȡ���ֵİ�λ��
		if (num==a*a*a+b*b*b+c*c*c)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
}
