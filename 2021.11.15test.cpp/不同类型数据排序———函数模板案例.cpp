#include<iostream>
using namespace std;
template <typename T>
void myswap(T &a, T &b)
{
	T tem;
	tem = a;
	a = b;
	b = tem;
}
template <typename T>
void paixu(T arr[], int len)
{
	int i = 0;
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		max = i;
		for (int j = i + 1; j < len; j++)
		{
			//���arr[j]��max��Ļ���j��ֵ��i���൱��max ��Ȼ������
			if (arr[max]< arr[j])
				max=j;
		}
		//�����ķŵ���һ��λ��ȥ,��Ҫ����������λ��
		//myswap(max, arr[i]);
		//���������У���������Ϊ��arr�����飬��maxΪ������˲���
		//��������ǣ��������͹�ȥ��
		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}
template <typename T>
void print(T arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
void test01()
{
	char arr[] = "laksjhd";
	//int arr[] = { 1,2,8,5,3,2 };
	int num = sizeof(arr) / sizeof(arr[0]);
	paixu(arr, num);
	print(arr, num);
}
int main()
{
	test01();
	system("pause");
	return 0;
}