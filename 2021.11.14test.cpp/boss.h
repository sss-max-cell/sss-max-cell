#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
class Boss :public Worker
{
public:
	//���캯��������и���ֵ
	Boss(int id, string name, int did);
	//��ʾ������Ϣ
	virtual void showinfo() ;
	//��ȡ��λ��Ϣ
	virtual string getDeptName() ;
};