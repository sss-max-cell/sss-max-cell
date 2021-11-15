#include"manager.h"
//构造函数对其进行赋初值
Manager:: Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}
//显示个人信息
void Manager::showinfo()
{
	cout << "编号： " << this->m_id
		<< "\t姓名：" << this->m_name
		<< "\t岗位： " << this->getDeptName()
		<< "\t任务： 向下传达老板的指令，向上接受任务"<< endl;
}
//获取岗位信息
 string Manager::getDeptName()
{
	 return "经理";
}