#include<iostream>
using namespace std;
int main()
{
	int arr[9] = { 2,33,7,44,22,5,12,43,28 };
	int i = 0;
	int u = 0;
	for (u = 0; u < 9; u++)
	{
		cout <<"ÅÅĞòÇ°£º"<< arr[u]<<endl;
	}
	for (i = 0; i < 9; i++)
	{
		int j = 0;
		for (j = 0; j < 8-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = 0;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
	for (u = 0; u < 9; u++)
	{
		cout << "ÅÅĞòºó£º" << arr[u] << endl;
	}
}