#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
class Boss :public Worker
{
public:
	//构造函数对其进行赋初值
	Boss(int id, string name, int did);
	//显示个人信息
	virtual void showinfo() ;
	//获取岗位信息
	virtual string getDeptName() ;
};