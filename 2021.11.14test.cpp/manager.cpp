#include"manager.h"
//���캯��������и���ֵ
Manager:: Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}
//��ʾ������Ϣ
void Manager::showinfo()
{
	cout << "��ţ� " << this->m_id
		<< "\t������" << this->m_name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t���� ���´����ϰ��ָ����Ͻ�������"<< endl;
}
//��ȡ��λ��Ϣ
 string Manager::getDeptName()
{
	 return "����";
}