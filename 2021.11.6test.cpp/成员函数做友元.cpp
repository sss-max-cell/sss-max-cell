#include<iostream>
using namespace std;
class building;
class goodgay
{
public:
	building* qq;
	void test();//�������Է��ʣ�building�е��κζ���
	void test2();//�������ܷ��ʣ�building�е�ĳЩ����
	goodgay();
};
class building
{
	friend void goodgay:: test();
	//������仰����ʹ��test��Ϊ�ˣ�building�ĺ���������ʹ�������Է��ʣ�building�ڵ�˽�г�Ա
public:
	building();
public:
	string keting;
private:
	string woshi;
};
building::building()
{
	keting = "����";
	woshi = "����";
}
goodgay::goodgay()
{
	qq = new building;
}
void goodgay::test()
{
	cout << "�û������ڷ��� " << qq->keting << endl;
	cout << "�û������ڷ��� " << qq->woshi << endl;//����ע�ǲ��е�
}
void goodgay::test2()
{
	cout << "�û������ڷ��� " << qq->keting << endl;
	//cout << "�û������ڷ��� " << qq->woshi << endl;�������Ѿ���Ĳ����ٴη���������
}
void test()//���Դ���
{
	goodgay ww;
	ww.test();
	ww.test2();
}
int main()
{
	test();
	system("pause");
	return 0;
}