//01��д3*4�ľ��󣬲���дһ�����������������Ƚ�������ֵ
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[3][4] = { {1,4,5,2},{33,4,1,22},{7,8,99,100} };
//	int j=0, i=0;
//	int maxx = arr[i][j];
//	int max(int z, int mmax);
//	int row, colum;
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			maxx=max(arr[i][j], maxx);
//			if (maxx == arr[i][j])//���������Ǽ�¼���е�����
//			{
//				row = i;
//				colum = j;
//			}
//		}
//	}
//	cout << "max= " << maxx << "row= " << row << "colum= " << colum << endl;
//}
//
//int max(int z, int mmax)
//{
//	if (z > mmax)
//		return z;
//	else return mmax;
//}

//02����ð�ݷ��������е�Ԫ�أ����д�С�����������
#include<iostream>;
using namespace std;
int main()
{
	void print(int arr[], int a);
	void paixu1(int arr[], int a);//���ֻ���ڲ���ͬһƬ��ַ�ڽ���������Ҫ�õ�ַ���н���
	void paixu2(int arr[], int a);//�䴫��ȥ���ǵ�ַ��
	int arr[10] = { 22,33,14,65,86,3,756,44,23,22 };
	int a = sizeof(arr) / sizeof(arr[0]);
	print(arr, a);
	paixu1(arr, a);
	print(arr, a);
}
void print(int arr[], int a)
{
	for (int z = 0; z < a; z++)
	{
		cout << arr[z]<<"  ";
	}
	cout << endl;
}
void paixu1(int* arr, int a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int q = 0;
				q = arr[j], arr[j] = arr[j+1], arr[j+1] = q;
			}
		}
	}
}
void paixu2(int arr[], int a)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < a; i++)
	{
		k = i;
		for (j = i + 1; j < a; j++)
		{
			if (arr[k] < arr[j])
			{

				int a = arr[k];
				arr[k] = arr[j];
				arr[j] = a;
			}
		}
	}
}
