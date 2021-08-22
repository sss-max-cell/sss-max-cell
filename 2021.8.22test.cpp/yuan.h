#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class yuan
{
public:
	//输入半径
	void setr(int r);

	//输出半径
	int getr();
	
	//设置圆心
	void setcenter(point center);
	
	//输出圆心
	point getcenter();
	
private:
	int y_r;//定义半径
	//在一个类中，可以让另一个类作为本来的成员
	point y_center;//定义圆心
};
