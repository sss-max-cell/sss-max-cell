#include<iostream>
using namespace std;
class anmial
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
class cat :public anmial
{
public:
	void speak()
	{
		cout << "Сè����˵��" << endl;
	}
};
class dog :public anmial
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//��̬
//������������ö�̬�����Ļ����������è��˵�������Ǵ�ӡ�����Ƕ�����˵����
//��Ϊ�����ڱ���׶ξͽ����ˣ�ָ����ַ�������Ļ�̫�����������Ҫ�����������ƣ�
//����visteral ���ͱ���˶�̬
//��̬ʹ�õ�����
//1.�����м̳�
//2.������д�����е��麯��
//��̬��ʹ��
//�����е�ָ������ã�����ָ�������еĶ���
void dospeak(anmial& aa)//anmial &aa=cat/dog
{
	aa.speak();
}
void test()
{
	cat qq;
	dospeak(qq);
	dog aa;
	dospeak(aa);
}
int main()
{
	test();
	system("pause");
	return 0;
}