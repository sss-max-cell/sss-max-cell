//���Բ�Ĺ�ϵ
#include<iostream>
using namespace std;
#include"point.h"
#include"yuan.h"
//class point
//{
//public:
//	//����x
//	void setx(int x)
//	{
//		y_x = x;
//	}
//	//���x
//	int getx()
//	{
//		return y_x;
//	}
//	//����y
//	void sety(int y)
//	{
//		y_y = y;
//	}
//	//���y
//	int gety()
//	{
//		return y_y;
//	}
//private:
//	int y_x;//����x����
//	int y_y;//����y����
//};
//class yuan
//{
//public:
//	//����뾶
//	void setr(int r)
//	{
//		y_r = r;
//	}
//	//����뾶
//	int getr()
//	{
//		return y_r;
//	}
//	//����Բ��
//	void setcenter(point center)
//	{
//		y_center = center;
//	}
//	//���Բ��
//	point getcenter()
//	{
//		return y_center;
//	}
//	private:
//		int y_r;//����뾶
//		//��һ�����У���������һ������Ϊ�����ĳ�Ա
//		point y_center;//����Բ��
//};
void panduan(yuan& c, point& p)
{
	//��������֮��ľ���
	int dd = (c.getcenter().getx() - p.getx()) ^ 2 + (c.getcenter().gety() - p.getx()) ^ 2;
	//����뾶��ƽ��
	int rr = (c.getr()) ^ 2;
	//�жϹ�ϵ
	if (dd == rr)
	{
		cout << "����Բ�� " << endl;
	}
	else if (dd > rr)
	{
		cout << "����Բ�� " << endl;
	}
	else
	{
		cout << "����Բ�� " << endl;
	}
}
int main()
{
	//����Բ	   
	yuan c;
	c.setr(10);
	point center;
	center.setx(0);
	center.sety(0);
	c.setcenter(center);
	//������
	point p;
	p.setx(10);
	p.sety(10);
	//�жϹ�ϵ
	panduan(c, p);

}