#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class yuan
{
public:
	//����뾶
	void setr(int r);

	//����뾶
	int getr();
	
	//����Բ��
	void setcenter(point center);
	
	//���Բ��
	point getcenter();
	
private:
	int y_r;//����뾶
	//��һ�����У���������һ������Ϊ�����ĳ�Ա
	point y_center;//����Բ��
};
