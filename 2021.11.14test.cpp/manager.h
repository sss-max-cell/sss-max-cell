#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
class Manager :public Worker
{
public:
	//���캯��������и���ֵ
	Manager(int id,string name,int did) ;
	//��ʾ������Ϣ
	virtual void showinfo();
	//��ȡ��λ��Ϣ
	virtual string getDeptName() ;
};