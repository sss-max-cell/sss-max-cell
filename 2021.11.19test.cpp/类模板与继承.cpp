#include<iostream>
using namespace std;
template<class T,class W>
class base
{
	
};
//��һ�ַ�������̳и����д��
//���е�һ�ַ�������Ҫ
class son :public base<int,char>
{
public:
	 
};
void test01()
{
	son a1;
}
//�ڶ��ַ�������̳и���ķ���,���ļ̳и����еĶ���
template<class T1,class T2>
class son2 :public base<T1>
{
	T2 aa;
};
void test02()
{
	son2 <int, char>s2;//����Ķ���
}
int main()
{
	system("pause");
	return 0;
}