#include<iostream>
using namespace std;
//���麯���ͳ�����
class base
{
public:
	//���麯��
	//ֻҪ��һ�����麯��������࣬�ͳ�Ϊ������
	//�������ص�
	//1.�޷�ʵ��������
	//2.��������࣬����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;
	//������ܴ�������
};
class son :public base
{
public:
	virtual void func() {};//����д��һ�䣬��Ȼ�������޷���������

};
int main()
{
	system("pause");
	return 0;
}