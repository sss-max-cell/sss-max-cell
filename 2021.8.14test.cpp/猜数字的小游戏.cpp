#include<iostream>
using namespace std;
#include<ctime>
int main()
{
	srand((unsigned int)time(NULL));//������ס��������������������������������������ӡ�
	int num = rand() % 100 + 1;//����������1~100֮�������
	int numw = 0;
	;
	while (1)
	{
		cout << "������������� " << endl;
		cin >> numw;
		if (numw > num)
		{
			cout << "����������ݹ����� " << endl;
		}
		else if (numw < num)
		{
			cout << "����������ݹ�С�� " << endl;
		}
		else
		{
			cout << "��ϲ�����������������ȷ�ģ������ֵĴ���" << num << endl;
			break;//��ѭ����break�����˳�ѭ��
		}
	}
}