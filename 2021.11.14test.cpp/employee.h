//��ͨ��Ա���ļ�
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
class Employee:public Worker
{
public:
	//���캯��
	Employee(int id,string name,int did);
	//��ʾ������Ϣ
	virtual void showinfo() ;
	//��ȡ��λ��Ϣ
	virtual string getDeptName() ;
};