#pragma once			//为了防止头文件的重复
#include<iostream>		//包含标准输入输出流
using namespace std;	//使用标准命名空间
#include"worker.h"
#include<fstream>
#define FINENAME "empFile.txt"
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//菜单界面
	void Show_Menu();

	//退出函数
	void exitsystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_Emparry;

	//添加职工的函数
	void Add_Emp();

	//保存文件的函数
	void save();

	//判断文件是否为空
	bool m_FileIsEmpty;

	//统计文件中人数的函数
	int get_EmpNum();

	//初始化职工操作
	void init_Emp();

	//析构函数
	~WorkerManager();
};