#include<iostream>
using namespace std;
//��̬��Ա����
//�������ж�����ͬһ����Ա����
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public:
	static void func()
	{
		a = 111;//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		//b = 222;��̬��Ա�����������Է��ʷǾ�̬��Ա��������Ϊ�����������ֵ������ĸ��Ǹ������b
		cout << "void func�����ĵ���" << endl;
	}
	static int a;
	int b = 0;
};
int person::a= 10;
//������ʲ���˽�еĳ�Ա��������
void test01()
{
	//��̬��Ա�����ĵ���
	//1ͨ����������
	person::func();
	//2ͨ���������
	person p;
	p.func();
}
int main()
{
	test01();
	return 0;
}