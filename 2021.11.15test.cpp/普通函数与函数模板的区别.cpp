#include<iostream>
using namespace std;
//1.������ͨ�����������Է�����ʽת��
//2.���ں���ģ�壬��Ĭ������£������Է�����ʽת��
//3.���ں���ģ�壬����ָ�����͵�����¿��Է�����ʽת��
int  addfunction(int a,int b)
{
	return a+ b;
}
 template <typename T>
 T add2(T a, T b)
 {
	 return  a + b;
 }
void test01()
{
	int a = 10;
	int b = 10;
	char c = 'c';//c��ascall��ֵ��99,99+10=109��
	cout << addfunction(a , c )<< endl;

	//�Զ������Ƶ�
	//cout << add2(a ,c) << endl;   ����ǲ��е�
	//��ʾָ������
	cout << add2<int>(a, c) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}