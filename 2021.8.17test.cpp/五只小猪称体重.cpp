//01  自己编写的
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 0 };
	cout << "请您输入5只小猪的体重" << endl;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int max = 0;
	for (i = 0; i < 4; i++)
	{
		if (arr[i] > arr[i + 1])//这个类似于冒泡法，对数据进行排序
		{
			int c = 0;
			c = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = c;
		}
		
	}
	cout << "最重的小猪是：" << arr[4] << endl;
}
//02 大神老师编写的
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 0 };
		cout << "请您输入5只小猪的体重" << endl;
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
				max = arr[i];//直接这样进行更新最大值，无需其他的步骤
			}
}
		cout << "最重的小猪是：" << max << endl;
}