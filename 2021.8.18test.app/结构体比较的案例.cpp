//������е��ѣ����Ҽ����˶���ð����������
#include<iostream>
using namespace std;
struct information
{
	string name;
	int age;
	string sex;
};
void print(information arr[5], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << "������" << arr[i].name << "���䣺" << arr[i].age << "�Ա�" << arr[i].sex << endl;
	}
}
void boulling(struct information arr[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)

		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct information tem = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tem;
			}

		}
	}
	
	
}
int main()
{
	information arr[5] =
	{
		{"����",23,"��"},
		{"���",34,"��"},
		{"���Ѿ�",19,"��Ů"},
		{"����",18,"������Ů"},
		{"������",19,"��������֪�����Լ�"}
	};
	int len = sizeof(arr) / sizeof(arr[1]);
	//��ӡ����
	print(arr, len);
	//ð��������
	boulling(arr, len);
	print(arr, len);

}
