#include<iostream>
using namespace std;
#include"workerManager.h"
//#include"employee.h"
//#include"worker.h"
//#include"boss.h"
//#include"manager.h"
int main()
{
	//��������
	WorkerManager wm;
	int choice;//������¼�û���ѡ��
	while (true)
	{
		//����չʾ�˵���Ա����
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�����
			wm.exitsystem();
				break;
		case 1://���ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			break;
		case 3://ɾ��ְ��
			break;
		case 4://�޸�ְ��
			break;
		case 5://����ְ��
			break;
		case 6://����ְ��
			break;
		case 7://����ĵ�
			break;
		}
	}
	system("pause");
	return 0;
}