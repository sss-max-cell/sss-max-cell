#include"boss.h"
//构造函数对其进行赋初值
Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}
//显示个人信息
void Boss::showinfo()
{
	cout << "编号： " << this->m_id
		<< "\t姓名：" << this->m_name
		<< "\t岗位： " << this->getDeptName()
		<< "\t任务： 向下向经理传达自己的意愿" << endl;
}
//获取岗位信息
string Boss::getDeptName()
{
	return "老板";
}