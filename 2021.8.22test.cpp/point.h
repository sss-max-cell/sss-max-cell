#pragma once
#include<iostream>
using namespace std;
class point
{
public:
	//输入x
	void setx(int x);
	
	//输出x
	int getx();
	
	//输入y
	void sety(int y);
	
	int gety();
	
private:
	int y_x;//定义x坐标
	int y_y;//定义y坐标
};
