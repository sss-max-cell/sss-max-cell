//01  �Լ���д��
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 0 };
	cout << "��������5ֻС�������" << endl;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int max = 0;
	for (i = 0; i < 4; i++)
	{
		if (arr[i] > arr[i + 1])//���������ð�ݷ��������ݽ�������
		{
			int c = 0;
			c = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = c;
		}
		
	}
	cout << "���ص�С���ǣ�" << arr[4] << endl;
}
//02 ������ʦ��д��
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 0 };
		cout << "��������5ֻС�������" << endl;
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			cin >> arr[i];
		}
		int max = 0;
		for (i = 0; i < 5; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];//ֱ���������и������ֵ�����������Ĳ���
			}
}
		cout << "���ص�С���ǣ�" << max << endl;
}