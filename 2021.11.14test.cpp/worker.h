#pragma once
#include<iostream>
using namespace std;
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showinfo()=0;
	//��ȡ��λ��Ϣ
	virtual string getDeptName() = 0;
	//ְ�����
	int m_id;
	//ְ������
	string m_name;
	//ְ�����ű��
	int m_did;
};
