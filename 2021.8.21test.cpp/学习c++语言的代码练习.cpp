//01 ����Ĭ�ϲ����Ĳ���
#include<iostream>
using namespace std;
int add(int a,int b=10,int c=10)//���ĳ���ط���Ĭ�ϲ�������ô�����������ʼ�������Ҿͱ��붼��Ĭ�ϲ���
{
	return a + b + c;
}
int addd(int a = 10, int b = 10);
int addd(int a = 10, int b = 10)//��������Ѿ���Ĭ�ϲ����Ļ�����ôʵ����������Ͳ����ٴ���Ĭ�ϲ���
{//������ֻ����һ��
	return a + b;
}
int main()
{
	int c = add(10);//����Ҵ��Ļ��������Ҵ���ֵ
	cout << "c="<<c << endl;
}
//02������ռλ
#include<iostream>
using namespace std;
void add(int a, int)//����������ã����ڵĿγ̻ὲ��
{
	cout << "������" << endl;
}
int main()
{
	add(10, 2);//���еڶ���2ֻ�ǽ���ռλ���ں����в����ܷ�����������
	return 0;
}
//03��������
#include<iostream>
using namespace std;
//��������
//�����ú�������ͬ����߸�����
//�������ص�����
//1��ͬһ����������
//2������������ͬ
//3�������Ĳ������Ͳ�ͬ���������ͬ����˳��ͬ
void func()
{
	cout << "func �ĵ���" << endl;
}
void func(int a)
{
	cout << "func(int a) �ĵ���" << endl;
}
void func(double x)
{
	cout << "func(double x) �ĵ���" << endl;
}
void func(int a,double x)
{
	cout << "func(int a,double x) �ĵ���" << endl;
}
void func( double x,int a)
{
	cout << "func(double x,int a) �ĵ���" << endl;
}
//int func(int a, double x)//�����ķ������ͣ�������Ϊ���ص�����
//{
//	cout << "func(int a,double x) �ĵ���" << endl;
//}
int main()
{
	func(3.15 ,1);//���Ը��ݲ�ͬ�Ĳ������ͣ����е���
	func();
	func(2);
	func(1, 3.14);
}
//04�������ص�ע������(15)
#include<iostream>
using namespace std;
//1 ������Ϊ���ص�����
void func(int& a)//�����10��������int &a=10����ǲ��Ϸ���
{
	cout << "func(int&a)������" << endl;
}
void func(const int& a)//���Ͳ�ͬ���Ϸ����� const int&a=10������const���Ը���һ���Ϸ��Ŀռ䣬ʹ��Ϸ�
{//�൱�� int tep=10;int &a=tep,ֻ�������Ҳ���tep
	cout << "func(const int&a)������" << endl;
}
//�������ص�Ӧ��
void fun(int a)
{
	cout << "func(int a)������" << endl;
}
void fun(int a,int b=10)
{
	cout << "func(int a int b)������" << endl;
}
int main()
{
	//int a = 10;//����a�Ǳ��������Ե���û��const���Ǹ�func
	//func(10);
	func(10);//����ǵ��� const ��func
	//fun(10);//��������֪�����Ǹ����洫���룬���Գ����� ��

}