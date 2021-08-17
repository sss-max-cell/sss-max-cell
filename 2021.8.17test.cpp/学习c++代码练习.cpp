//01
//本次任务打印出。10*10行的※
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
//本次进行continue的讲解
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)//进行输出其中的ji数
	{
		if (i % 2 == 0)
		{
			continue;//countinue跳出本次循环的下面部分，不再执行。break直接跳出循环
		}
		cout << i << endl;
	}
}
//03
//本次对goto进行解释，它不太被推荐使用，因为可能会比较乱
#include<iostream>
using namespace std;
int main()
{
	cout << "孙永涛是猪吗？" << endl;
	goto ZHU;
	cout << "是 " << endl;
	ZHU:
	cout << "haha,你居然说是，狗头，代码又看错了吧!haohao学习学习goto语句吧大哥哥" << endl;

}
//04
//数组
#include<iostream>
using namespace std;
int main()
{
	/*
	数据类型 数组名[数组长度]；
	数据类型 数组名[数组长度] = { 值1，值2..... };
	数据类型 数组名[] = { 值1，值2，....... };
	*/
	int arr[4];//对于这种，初始的时候必须有数组长度。
	int arr1[7] = { 0 };
	int ar2r[] = { 9 };
	cout << "数组的地址 " << (int)arr1 << endl;
}
//05
//二维数组的定义
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
	int arr4[][3] = { 1,2,3,4,5,6 };//行数可以省落，列数不能省落
	cout << "这个二维数组的行数是：" << sizeof(arr1) / sizeof(arr1[0]);
	cout << "这个二维数组的列数是：" << sizeof(arr1[0]) / sizeof(arr1[0][0]);
}