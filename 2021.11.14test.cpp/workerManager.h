#pragma once			//Ϊ�˷�ֹͷ�ļ����ظ�
#include<iostream>		//������׼���������
using namespace std;	//ʹ�ñ�׼�����ռ�
#include"worker.h"
#include<fstream>
#define FINENAME "empFile.txt"
class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//�˵�����
	void Show_Menu();

	//�˳�����
	void exitsystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_Emparry;

	//���ְ���ĺ���
	void Add_Emp();

	//�����ļ��ĺ���
	void save();

	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ���ļ��������ĺ���
	int get_EmpNum();

	//��ʼ��ְ������
	void init_Emp();

	//��������
	~WorkerManager();
};