//点和圆的关系
#include<iostream>
using namespace std;
#include"point.h"
#include"yuan.h"
//class point
//{
//public:
//	//输入x
//	void setx(int x)
//	{
//		y_x = x;
//	}
//	//输出x
//	int getx()
//	{
//		return y_x;
//	}
//	//输入y
//	void sety(int y)
//	{
//		y_y = y;
//	}
//	//输出y
//	int gety()
//	{
//		return y_y;
//	}
//private:
//	int y_x;//定义x坐标
//	int y_y;//定义y坐标
//};
//class yuan
//{
//public:
//	//输入半径
//	void setr(int r)
//	{
//		y_r = r;
//	}
//	//输出半径
//	int getr()
//	{
//		return y_r;
//	}
//	//设置圆心
//	void setcenter(point center)
//	{
//		y_center = center;
//	}
//	//输出圆心
//	point getcenter()
//	{
//		return y_center;
//	}
//	private:
//		int y_r;//定义半径
//		//在一个类中，可以让另一个类作为本来的成员
//		point y_center;//定义圆心
//};
void panduan(yuan& c, point& p)
{
	//计算两点之间的距离
	int dd = (c.getcenter().getx() - p.getx()) ^ 2 + (c.getcenter().gety() - p.getx()) ^ 2;
	//计算半径的平方
	int rr = (c.getr()) ^ 2;
	//判断关系
	if (dd == rr)
	{
		cout << "点在圆上 " << endl;
	}
	else if (dd > rr)
	{
		cout << "点在圆外 " << endl;
	}
	else
	{
		cout << "点在圆内 " << endl;
	}
}
int main()
{
	//创建圆	   
	yuan c;
	c.setr(10);
	point center;
	center.setx(0);
	center.sety(0);
	c.setcenter(center);
	//创建点
	point p;
	p.setx(10);
	p.sety(10);
	//判断关系
	panduan(c, p);

}