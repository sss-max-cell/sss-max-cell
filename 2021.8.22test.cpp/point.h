#pragma once
#include<iostream>
using namespace std;
class point
{
public:
	//����x
	void setx(int x);
	
	//���x
	int getx();
	
	//����y
	void sety(int y);
	
	int gety();
	
private:
	int y_x;//����x����
	int y_y;//����y����
};
