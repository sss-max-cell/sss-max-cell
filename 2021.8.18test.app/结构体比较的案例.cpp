//这个题有点难，让我加深了对于冒泡排序的理解
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
		cout << "姓名：" << arr[i].name << "年龄：" << arr[i].age << "性别" << arr[i].sex << endl;
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
		{"关羽",23,"男"},
		{"李白",34,"男"},
		{"王昭君",19,"美女"},
		{"貂蝉",18,"大大的美女"},
		{"孙永涛",19,"哈哈，我知道我自己"}
	};
	int len = sizeof(arr) / sizeof(arr[1]);
	//打印函数
	print(arr, len);
	//冒泡排序函数
	boulling(arr, len);
	print(arr, len);

}
