#include<iostream>
using namespace std;
class father
{
public:
	//��ˮ
	virtual void zhucha() = 0;
	//����
	virtual void chongpao() = 0;
	//���뱭��
	virtual void daorubeizhong() = 0;
	//��������
	virtual void jiaruzuoliao() = 0;
	void make()
	{
		zhucha() ;
		chongpao();
		daorubeizhong();
			jiaruzuoliao();
	}
};
//����
class CoCo :public father
{
public:
	//��ˮ
	virtual void zhucha()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	//����
	virtual void chongpao()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void daorubeizhong()
	{
		cout << "���벣������" << endl;
	}
	//��������
	virtual void jiaruzuoliao()
	{
		cout << "������ۣ�����ɿ�" << endl;
	}
};
//���������
class popo :public father
{
public:
	//��ˮ
	virtual void zhucha()
	{
		cout << "�����ɽ" << endl;
	}
	//����
	virtual void chongpao()
	{
		cout << "��������" << endl;
	}
	//���뱭��
	virtual void daorubeizhong()
	{
		cout << "�������ϱ���" << endl;
	}
	//��������
	virtual void jiaruzuoliao()
	{
		cout << "�����㽶������ƻ��" << endl;
	}
};
//д����������
void dowork(father *abs)
{
	abs->make();
	delete abs;
}
void test()
{
	//��������
	cout << "��������" << endl;
	dowork(new CoCo);
	cout << "-----------------" << endl;
	//���������
	cout << "���������" << endl;
	dowork(new popo);

}
int main()
{
	test();
	system("pause");
	return 0;
}