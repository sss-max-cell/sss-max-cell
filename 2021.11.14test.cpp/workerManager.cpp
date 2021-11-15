#include"workerManager.h"
#include<iostream>
using namespace std;
#include"boss.h"
#include"manager.h"
#include"employee.h"

//���캯��
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FINENAME, ios::in);//�Զ��ķ�ʽ���д�
	if (!(ifs.is_open()))
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		this->m_EmpNum = 0;
		//��ʼ��ָ��
		this->m_Emparry = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ������ڲ��ǿ�
	char ch;
	ifs >> ch;
	if (ifs.eof())//�ж��ļ��Ƿ�Ϊ�գ���Ϊ�յķ���һ����
	{
		//�ļ�Ϊ��
		cout << "�ļ����ڣ�����Ϊ��" << endl;
		//��ʼ������
		this->m_EmpNum = 0;
		//��ʼ��ָ��
		this->m_Emparry = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ�����ͳ���ļ��ڵ�ְ������
	int num=this->get_EmpNum();
	cout << "�����ļ����� " << num << "��ְ����Ϣ" << endl;
	this->m_EmpNum = num;
}

//�˵���ʾ����
void WorkerManager::Show_Menu()
{
	cout << "*********************************************" << endl;
	cout << "************��ӭʹ��ְ������ϵͳ*************" << endl;
	cout << "*************** 0�˳�Ӧ�ó��� ***************" << endl;
	cout << "*************** 1����ְ����Ϣ ***************" << endl;
	cout << "*************** 2��ʾְ����Ϣ ***************" << endl;
	cout << "*************** 3ɾ����ְְ�� ***************" << endl;
	cout << "*************** 4�޸�ְ����Ϣ ***************" << endl;
	cout << "*************** 5����ְ����Ϣ ***************" << endl;
	cout << "*************** 6���ձ������ ***************" << endl;
	cout << "*************** 7��������ĵ� ***************" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

//�˳�����
void WorkerManager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");//��������ϵͳ���ݻ���һ���ڽ��н���
	exit(0);//������˳������������������������������˳�
}

//���ְ���ĺ���
void WorkerManager::Add_Emp()
{
	cout << "��������Ҫ��ӵ�ְ������" << endl;
	int addnum = 0;
	cin >> addnum;
	//*******�����������δ���������������
	if (addnum > 0)
	{
		//���
		//������ӿռ��С
		int newSize = this->m_EmpNum + addnum;
		//�����¿ռ�
		Worker** newSpace = new Worker*[newSize];
		//����worker*�ռ�����Ϊ���������洢����ͬ�����е����ݣ�������
		//worker*��˵�����ķ���ֵ��worker**��

		//��ԭ���ռ��µ����ݣ��������µĿռ���
		if (this->m_Emparry != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_Emparry[i];
			}
		}
		//����µ�����
		for (int i = 0; i < addnum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dSelect;//����ѡ��
			cout << "������� " << i + 1 << "��Ա���ı��" << endl;
			cin >> id;
			cout << "������� " << i + 1 << "��Ա��������" << endl;
			cin >> name;
			cout << "��ѡ���ְ���ĸ�λ" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.��˾����" << endl;
			cout << "1.��˾�ϰ�" << endl;
			cin >> dSelect;
			//*******�����������δ���������������
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
			//worker �Ѿ���ָ�������Ѿ�ָ���˴����Ķ�����˲����١�i����
			newSpace[this->m_EmpNum + i] = worker;
			//�ͷ�ԭ�пռ�
			delete[] this->m_Emparry;//�ͷ�����ķ�ʽ
			//�����µĿռ�ָ��
			this->m_Emparry = newSpace;
			//�����µ�ְ������
			this->m_EmpNum = newSize;
			//�ɹ���Ӻ󣬸ı��ļ���ʹ����ʾ��Ϊ��
			this->m_FileIsEmpty = false;
			//��ʾһ��
			cout << "�ɹ������" << addnum << "��Ա����Ϣ" << endl;
			//�ɹ���Ӻ󣬽��б������
			//*******��������������������˵���Ϣ�Ļ�������ͻ����
			this->save();
		}
	}
	else 
	{
		cout << "������������" << endl;
	}
	//�������֮�������ƽ�Ĵ���
	system("pause");
	//������������ձ������񣬷��ص��ϸ�Ŀ¼
	system("cls");
}

//�����ļ��ĺ���
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FINENAME, ios::out);//�����ʽ�������൱��д�ļ���
	for (int i = 0; i < this->m_EmpNum;i++)
	{
		ofs << this->m_Emparry[i]->m_id << " " <<
			this->m_Emparry[i]->m_name << " " <<
			this->m_Emparry[i]->m_did << " " << endl;
	}
	ofs.close();
}


//ͳ���ļ��������ĺ���
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FINENAME, ios::in);//���ļ�
	int id;
	string name;
	int did;
	int num = 0;
	//���ļ�ͳ������
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}


//��ʼ��ְ������
void WorkerManager::init_Emp()
{

}


//��������
WorkerManager::~WorkerManager()
{

}