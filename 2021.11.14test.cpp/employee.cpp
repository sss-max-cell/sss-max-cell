#include"employee.h"
//���캯��
Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}
//��ʾ������Ϣ
 void Employee::showinfo()
{
	 cout << "��ţ� " << this->m_id
		 << "\t������" << this->m_name
		 << "\t��λ�� " << this->getDeptName()
		 << "\t���� ��ɾ������õ�����"<< endl;
}

//��ȡ��λ��Ϣ
 string Employee::getDeptName()
{
	 return "��ͨԱ��";
}
