#include<iostream>
using namespace std;
class basepage
{
public:
	void head()
	{
		cout << "��ҳ�������Ŷӣ�ȫ����У���������̵�" << endl;
	}
	void toe()
	{
		cout << "����ָ����������ϵ���������" << endl;
	}
	void leaf()
	{
		cout << "java,python,c/c++��" <<endl;
	}
};
//�̳еĺô��������ظ�����
//�﷨��class ���ࣺ�̳з�ʽ ����
//����  Ҳ��Ϊ������
//����  Ҳ��Ϊ�˻���
class java:public basepage
{
public:
	void content()
	{
		cout << "java�ļ���ҳ�棺" << endl;
	}
};
class python :public basepage
{
public:
	void content()
	{
		cout << "python�ļ���ҳ�棺" << endl;
	}
};
class cpp : public basepage
{
public:
	void content()
	{
		cout << "cpp�ļ���ҳ�棺" << endl;
	}
};
void test()
{
	//java 
	java jv;
	jv.content();
	jv.head();
	jv.leaf();
	jv.toe();
	cout << "----------------" << endl;
	//pathon
	python pa;
	pa.content();
	pa.head();
	pa.leaf();
	pa.toe();
	cout << "----------------" << endl;
	//cpp
	cpp cc;
	cc.content();
	cc.head();
	cc.leaf();
	cc.toe();
	cout << "----------------" << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}