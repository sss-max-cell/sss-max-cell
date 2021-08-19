#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
//�˵�����
void showmen()
{
	cout << "*****************************" << endl;
	cout << "*****   1�������ϵ��   *****" << endl;
	cout << "*****   2����ʾ��ϵ��   *****" << endl;
	cout << "*****   3��ɾ����ϵ��   *****" << endl;
	cout << "*****   4��������ϵ��   *****" << endl;
	cout << "*****   5���޸���ϵ��   *****" << endl;
	cout << "*****   6�������ϵ��   *****" << endl;
	cout << "*****   0���˳�ͨѶ¼   *****" << endl;
	cout << "*****************************" << endl;
}
//1���һ����ϵ�˵Ľṹ��
struct person
{
	//����
	string m_name;
	//�Ա�  1�� 2Ů
	int m_sex;
	//����
	string m_age;
	//�绰
	string m_phone;
	//סַ
	string m_addr;

};
//2���ͨѶ¼�ṹ��
struct addressbooks
{
	//ͨѶ¼�б������ϵ�˵�����
	struct person personarray[MAX];
	//ͨѶ¼�е�ǰ��ϵ�˵ĸ���
	int m_size;
};
//1�����ϵ��
void addperson(addressbooks *abs)
{
	//�����ж�ͨѶ¼�Ƿ���Լ������
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
	}
	else
	{
		//��Ӿ������ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personarray[abs->m_size].m_name = name;
		//�Ա�
		while (true)
		{
			int a = 0;
			cout << "�������Ա�" << endl;
			cout << "1 ���� 2Ů��" << endl;
			cin >> a;
			if (a == 1 || a == 2)
			{
				abs->personarray[abs->m_size].m_sex = a;
				break;
			}
			else
			{
				cout << "������Ա���Ч������������" << endl;
			}
		}
		//����
		while (true)
		{
			cout << "����������" << endl;
			int age = 0;
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personarray[abs->m_size].m_age = age;
				break;
			}
			else
			{
				cout << "�������������������������" << endl;
			}
		}
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string tele ;
		cin >> tele;
		abs->personarray[abs->m_size].m_phone = tele;
		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string adder ;
		cin >> adder;
		abs->personarray[abs->m_size].m_addr = adder;
		//��ͨѶ¼�е���Ϣ���и���
		abs->m_size++;
		cout << "��ӳɹ�" << endl;
		system("pause");//�밴���������
		system("cls");//��������
	}
}
//2��ʾ��ϵ����Ϣ�ĺ���
void show(addressbooks abs)
{
	if (abs.m_size == 0)
	{
		cout << "ͨѶ¼���������Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs.m_size; i++)
		{
			cout << "������" << abs.personarray[i].m_name<<"\t"
				<< "���䣺" << abs.personarray[i].m_age<<"\t"
				<< "�Ա�" << (abs.personarray[i].m_sex==1?"��":"Ů")<<"\t"
				<< "�绰��" << abs.personarray[i].m_phone<<"\t"
				<< "סַ��" << abs.personarray[i].m_addr << endl;
		}
	}
	system("pause");//�밴���������
	system("cls");//������������
}
//�����ϵ���Ƿ���ڣ�������ڵĻ������������е�λ�ã������ڷ���-1
int isexist(addressbooks* abs, string name)
{
	int i = 0;
	for (i = 0; i < abs->m_size; i++)
	{
		if (abs->personarray[i].m_name == name)
		{
			cout << "�ҵ�����" << endl;
			return i;//�ҵ������ͷ�������������е��±�
		}
	}
	cout << "���޴���" << endl;
	return -1;//һֱ��������û���ҵ����򷵻�-1��
}
//3ɾ��ָ������ϵ��
void deletePerson(addressbooks* abs)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
		if (ret != -1)//ret==-1����ȥд
		{
			//�鵽���ˣ�Ҫ����ɾ��
			for (int i = ret; i < abs->m_size; i++)
			{
				abs->personarray[i] = abs->personarray[i + 1];
			}
			abs->m_size--;//����ͨѶ�е���Ϣ
			cout << "ɾ���ɹ�" << endl;
		}
		system("pause");
		system("cls");
}
//4������ϵ�˵Ĵ���
void seeperson(addressbooks abs)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isexist(&abs, name);
	if (ret != -1)
	{
		cout << "������" << abs.personarray[ret].m_name << "\t"
			<< "���䣺" << abs.personarray[ret].m_age << "\t"
			<< "�Ա�" << (abs.personarray[ret].m_sex == 1 ? "��" : "Ů") << "\t"
			<< "�绰��" << abs.personarray[ret].m_phone << "\t"
			<< "סַ��" << abs.personarray[ret].m_addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}
//5�޸���ϵ����Ϣ
void modifyPerson(addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personarray[ret].m_name = name;
		//�Ա�
		while (true)
		{
			int a = 0;
			cout << "�������Ա�" << endl;
			cout << "1 ���� 2Ů��" << endl;
			cin >> a;
			if (a == 1 || a == 2)
			{
				abs->personarray[ret].m_sex = a;
				break;
			}
			else
			{
				cout << "������Ա���Ч������������" << endl;
			}
		}
		//����
		while (true)
		{
			cout << "����������" << endl;
			int age = 0;
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personarray[ret].m_age = age;
				break;
			}
			else
			{
				cout << "�������������������������" << endl;
			}
		}
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string tele;
		cin >> tele;
		abs->personarray[ret].m_phone = tele;
		//��ͥסַ
		cout << "�������ͥסַ" << endl;
		string adder;
		cin >> adder;
		abs->personarray[ret].m_addr = adder;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}
//���������ϵ��
void cleanPerson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�Ѿ����" << endl;
	system("pause");//�����������
	system("cls");//����
}
int main()
{
	//����ͨѶ¼�ṹ�����
	addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա�ĸ���
	abs.m_size = 0;
	int select = 0;
	
	while (true)
	{
		//�˵�����
		showmen();
		cin >> select;
		switch (select)
		{
		case 1:
			addperson(&abs);
			break;//1�������ϵ��
		case 2:
			//������ʾͨѶ¼����ϵ�˵���Ϣ�ĺ���
			show(abs);
			break;//2����ʾ��ϵ��
		case 3:
		/*{cout << "������һ��ɾ����ϵ�˵�����" << endl;
		string name;
		cin >> name;
			if ((isexist(&abs, name)) == -1)//����ע��
			{
			cout << "���޴���" << endl;
			}
		}*/
			deletePerson(&abs);
			break;//3��ɾ����ϵ��
		case 4:
			seeperson(abs);
			break;//4��������ϵ��
		case 5:
			modifyPerson(&abs);
			break;//5���޸���ϵ��
		case 6:
			cleanPerson(&abs);
			break;//6�������ϵ��
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");//���������ǻ�����Ļ�ϴ�ӡ�������밴�����������Ȼ������㰴��������Ϳ�����
			break;//0���˳�ͨѶ¼
		}
	}
	return 0;
}