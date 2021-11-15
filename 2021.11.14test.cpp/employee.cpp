#include"employee.h"
//构造函数
Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}
//显示个人信息
 void Employee::showinfo()
{
	 cout << "编号： " << this->m_id
		 << "\t姓名：" << this->m_name
		 << "\t岗位： " << this->getDeptName()
		 << "\t任务： 完成经历布置的任务"<< endl;
}

//获取岗位信息
 string Employee::getDeptName()
{
	 return "普通员工";
}
