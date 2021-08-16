#include<iostream>
using namespace std;
#include<ctime>
int main()
{
	srand((unsigned int)time(NULL));//把他记住，可以用于声成随机数。这个东西是随机数种子。
	int num = rand() % 100 + 1;//限制其声成1~100之间的数据
	int numw = 0;
	;
	while (1)
	{
		cout << "请玩家输入数据 " << endl;
		cin >> numw;
		if (numw > num)
		{
			cout << "您输入的数据过大啦 " << endl;
		}
		else if (numw < num)
		{
			cout << "您输入的数据过小啦 " << endl;
		}
		else
		{
			cout << "恭喜您：输入的数据是正确的，本数字的答案是" << num << endl;
			break;//再循环中break可以退出循环
		}
	}
}