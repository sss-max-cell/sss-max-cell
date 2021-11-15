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
			//如果arr[j]比max大的话把j赋值给i，相当于max 仍然是最大的
			if (arr[max]< arr[j])
				max=j;
		}
		//把最大的放到第一个位置去,需要交换他两的位置
		//myswap(max, arr[i]);
		//这样传不行，可能是因为，arr是数组，而max为整型因此不形
		//解决方法是，都传整型过去。
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