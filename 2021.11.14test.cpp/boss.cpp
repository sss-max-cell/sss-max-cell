#include"boss.h"
//���캯��������и���ֵ
Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}
//��ʾ������Ϣ
void Boss::showinfo()
{
	cout << "��ţ� " << this->m_id
		<< "\t������" << this->m_name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t���� �����������Լ�����Ը" << endl;
}
//��ȡ��λ��Ϣ
string Boss::getDeptName()
{
	return "�ϰ�";
}