#include<iostream>
using namespace std;
#include<string>
class buliding
{
	friend void friendgay(buliding& ba);
	//���friend����Ԫ��ʹ���������bulid��Ϊ�����ѣ�ʹ������������Է���������ڵ�˽�б���
public:
	 buliding()
	{
		 m_sittingroom = "����";
		 m_bedrood = "����";
	}
public:
	string m_sittingroom;//����
private:
	string m_bedrood;
};
void friendgay(buliding &ba)//��������д����buliding *nn��
//���������ã���.����&���ţ��൱�������´�����һ���µĶ���
{//�����������*���൱���Ǵ��ĵ�ַ�������->�����з���
	cout << "�û������ڷ��� " << ba.m_sittingroom << endl;//��������дnn->m_sittingroom 
	cout << "�û������ڷ��� " << ba.m_bedrood << endl;
}
void test()
{
	buliding qqq;
	friendgay(qqq);//���߶�������Ļ����������������д����*qqq��
}
int main()
{
	test();
	system("pause");
	return 0;
}