//普通的员工文件
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
class Employee:public Worker
{
public:
	//构造函数
	Employee(int id,string name,int did);
	//显示个人信息
	virtual void showinfo() ;
	//获取岗位信息
	virtual string getDeptName() ;
};