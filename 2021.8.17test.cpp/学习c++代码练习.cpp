//01
//���������ӡ����10*10�еġ�
#include<iostream>
using namespace std;
int main()
{
	int j = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			cout << " *";
		}
		cout << "\n";
	}
}
//02
//���ν���continue�Ľ���
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)//����������е�ji��
	{
		if (i % 2 == 0)
		{
			continue;//countinue��������ѭ�������沿�֣�����ִ�С�breakֱ������ѭ��
		}
		cout << i << endl;
	}
}
//03
//���ζ�goto���н��ͣ�����̫���Ƽ�ʹ�ã���Ϊ���ܻ�Ƚ���
#include<iostream>
using namespace std;
int main()
{
	cout << "������������" << endl;
	goto ZHU;
	cout << "�� " << endl;
	ZHU:
	cout << "haha,���Ȼ˵�ǣ���ͷ�������ֿ����˰�!haohaoѧϰѧϰgoto���ɴ���" << endl;

}
//04
//����
#include<iostream>
using namespace std;
int main()
{
	/*
	�������� ������[���鳤��]��
	�������� ������[���鳤��] = { ֵ1��ֵ2..... };
	�������� ������[] = { ֵ1��ֵ2��....... };
	*/
	int arr[4];//�������֣���ʼ��ʱ����������鳤�ȡ�
	int arr1[7] = { 0 };
	int ar2r[] = { 9 };
	cout << "����ĵ�ַ " << (int)arr1 << endl;
}
//05
//��ά����Ķ���
#include<iostream>
using namespace std;
int main()
{
	int arr1[2][3] = { {1,2,3},{4,5,6} };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	int arr3[2][3] = { 1,2,3,4,5,6 };
	int arr4[][3] = { 1,2,3,4,5,6 };//��������ʡ�䣬��������ʡ��
	cout << "�����ά����������ǣ�" << sizeof(arr1) / sizeof(arr1[0]);
	cout << "�����ά����������ǣ�" << sizeof(arr1[0]) / sizeof(arr1[0][0]);
}