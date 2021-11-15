#include"workerManager.h"
#include<iostream>
using namespace std;
#include"boss.h"
#include"manager.h"
#include"employee.h"

//构造函数
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FINENAME, ios::in);//以读的方式进行打开
	if (!(ifs.is_open()))
	{
		cout << "文件不存在" << endl;
		//初始化人数
		this->m_EmpNum = 0;
		//初始化指针
		this->m_Emparry = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在，但是内部是空
	char ch;
	ifs >> ch;
	if (ifs.eof())//判断文件是否为空，不为空的返回一个真
	{
		//文件为空
		cout << "文件存在，但是为空" << endl;
		//初始化人数
		this->m_EmpNum = 0;
		//初始化指针
		this->m_Emparry = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在，并且统计文件内的职工人数
	int num=this->get_EmpNum();
	cout << "现在文件内有 " << num << "个职工信息" << endl;
	this->m_EmpNum = num;
}

//菜单显示函数
void WorkerManager::Show_Menu()
{
	cout << "*********************************************" << endl;
	cout << "************欢迎使用职工管理系统*************" << endl;
	cout << "*************** 0退出应用程序 ***************" << endl;
	cout << "*************** 1增加职工信息 ***************" << endl;
	cout << "*************** 2显示职工信息 ***************" << endl;
	cout << "*************** 3删除离职职工 ***************" << endl;
	cout << "*************** 4修改职工信息 ***************" << endl;
	cout << "*************** 5查找职工信息 ***************" << endl;
	cout << "*************** 6按照编号排序 ***************" << endl;
	cout << "*************** 7清空所有文档 ***************" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

//退出函数
void WorkerManager::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");//作用是让系统短暂缓和一下在进行结束
	exit(0);//这个是退出函数，无论在哪里他都可以让你退出
}

//添加职工的函数
void WorkerManager::Add_Emp()
{
	cout << "请输入需要添加的职工数量" << endl;
	int addnum = 0;
	cin >> addnum;
	//*******这里的问题是未考虑输入出错的情况
	if (addnum > 0)
	{
		//添加
		//计算添加空间大小
		int newSize = this->m_EmpNum + addnum;
		//开辟新空间
		Worker** newSpace = new Worker*[newSize];
		//开辟worker*空间是因为，让他来存储，不同对象中的数据，而对于
		//worker*来说，他的返回值是worker**；

		//将原来空间下的数据，拷贝到新的空间下
		if (this->m_Emparry != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_Emparry[i];
			}
		}
		//添加新的数据
		for (int i = 0; i < addnum; i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dSelect;//部门选择
			cout << "请输入第 " << i + 1 << "个员工的编号" << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << "个员工的姓名" << endl;
			cin >> name;
			cout << "请选择该职工的岗位" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.公司经理" << endl;
			cout << "1.公司老板" << endl;
			cin >> dSelect;
			//*******这里的问题是未考虑输入出错的情况
			Worker* worker = NULL;
			switch (dSelect)
			{
				case 1:
					worker = new Employee(id, name, 1);
					break;
				case 2:
					worker = new Manager(id, name, 2);
					break;
				case 3:
					worker = new Boss(id, name, 3);
					break;
			default:
				break;
			}
			//worker 已经是指针啦，已经指向了创建的对象，因此不用再【i】啦
			newSpace[this->m_EmpNum + i] = worker;
			//释放原有空间
			delete[] this->m_Emparry;//释放数组的方式
			//更新新的空间指向
			this->m_Emparry = newSpace;
			//更新新的职工人数
			this->m_EmpNum = newSize;
			//成功添加后，改变文件，使其显示不为空
			this->m_FileIsEmpty = false;
			//提示一下
			cout << "成功添加了" << addnum << "个员工信息" << endl;
			//成功添加后，进行保存操作
			//*******这里的问题是输入两个人的信息的话，程序就会崩溃
			this->save();
		}
	}
	else 
	{
		cout << "输入数据有误" << endl;
	}
	//输入完成之后进行清平的代码
	system("pause");
	//他的作用是清空本个任务，返回到上个目录
	system("cls");
}

//保存文件的函数
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FINENAME, ios::out);//输出方式打开它，相当于写文件啦
	for (int i = 0; i < this->m_EmpNum;i++)
	{
		ofs << this->m_Emparry[i]->m_id << " " <<
			this->m_Emparry[i]->m_name << " " <<
			this->m_Emparry[i]->m_did << " " << endl;
	}
	ofs.close();
}


//统计文件中人数的函数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FINENAME, ios::in);//打开文件
	int id;
	string name;
	int did;
	int num = 0;
	//读文件统计数据
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}


//初始化职工操作
void WorkerManager::init_Emp()
{

}


//析构函数
WorkerManager::~WorkerManager()
{

}