#include<iostream>
using namespace std;
class person
{
public:
	//�ص�
	//1.���ж��󶼹���һ�ݶ���
	//2.�����ʱ��ͻ����ռ�
	//3.���������������ʼ��
	static int a;
private:
	static int b;
};
int person::a = 10;//�������Ľ���
int person::b=20;
void test01()
{
	person p;
	cout << p.a << endl;
	person w;//��һ���Ľ���
	w.a = 20;
	cout << p.a << endl;
	//p.b������˽���������£�������ֱ�ӱ�����
}
void test02()
{
	//��̬��Ա������������ĳһ�������ϣ����ǿ��Ա���������һ��ͬʹ�õ�
	//ͨ��������з���
	person p;
	cout << p.a << endl;
	//ͨ���������з���
	cout << person::a << endl;
}
int main()
{
	test01();
	//test02();

	return 0;
}