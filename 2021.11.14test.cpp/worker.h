#pragma once
#include<iostream>
using namespace std;
class Worker
{
public:
	//显示个人信息
	virtual void showinfo()=0;
	//获取岗位信息
	virtual string getDeptName() = 0;
	//职工编号
	int m_id;
	//职工姓名
	string m_name;
	//职工部门编号
	int m_did;
};
