#include<iostream>
using namespace std;
//������������
// ������������
//�������
//�����Ϊ,��ȡ���������������
//�ֱ�����ȫ�ֺ������Ա���� �ж������������Ƿ����
class Cube
{
public:
	//���ó�
	void setl(int l)
	{
		c_l = l;
	}
	//��ȡ��
	int getl()
	{
		return c_l;
	}
	//���ÿ�
	void setw(int w)
	{
		c_w = w;
	}
	//��ȡ��
	int getw()
	{
		return c_w;
	}
	//���ø�
	void seth(int h)
	{
		c_h = h;
	}
	//��ȡ��
	int geth()
	{
		return c_h;
	}
	//��ȡ���������
	int mianji()
	{
		return 2 * c_l * c_w + 2 * c_l * c_h + 2 * c_h * c_w;
	}
	//��ȡ���������
	int tiji()
	{
		return c_l * c_w * c_h;
	}
	bool isSame2(Cube& c)//��ʼ����ʵ���������㴫���ʵ����������ж�
	{
		if ((c_l == c.getl()) && (c_w == c.getw()) && (c_h == c.geth()))
		{
			return true;
		}
		return false;
	}
private:
	int c_l;//��
	int c_w;//��
	int c_h;//��

};
//����ȫ�ֺ������ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if ((c1.geth() == c2.geth()) && (c1.getl() == c2.getl()) && (c1.getw() == c2.getw()))
	{
		return true;
	}
	return false;
}

int main()
{
	Cube c1;
	c1.setl(10);
	c1.seth(10);
	c1.setw(10);
	cout << "c1�����Ϊ��" << c1.mianji() << endl;
	cout << "c1�����Ϊ��" << c1.tiji() << endl;
	//�����ڶ���������
	Cube c2;
	c2.setl(10);
	c2.seth(10);
	c2.setw(10);
	//����ȫ�ֺ��������ж�
	int ret = isSame(c1, c2);
	if (ret)//�����ȵĻ� ����1�����򷵻�0
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
	ret = c1.isSame2(c2);//c1�Ѿ������ݴ���ȥ�����൱�ڵ���c1 ����c2���бȽ�
	if (ret)//�����ȵĻ� ����1�����򷵻�0
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}
