#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ss;
	//3.打开文件，并且判断是否打开成功
	ss.open("text.txt", ios::in);
	//对于is_open函数，如果成功的话会返回1，否则返回其他
	if (!ss.is_open())
	{
		cout << "打开失败" << endl;
		return;
	}
	//4.读数据
	//第一种读取方式
	/*char buf[222] = { 0 };
	while (ss >> buf)
	{
		cout << buf << endl;
	}*/
	//第二种读取方法
	//char buf[222] = { 0 };
	//while (ss.getline(buf, 222))
	//{
	//	cout << buf << endl;
	//}
	//第三种方法
	/*string buf;
	while (getline(ss, buf))
	{
		cout << buf << endl;
	}*/
	//第四种方法,不推荐用
	char c;
	//这个是一个一个读的，故不需要endl；
	while ((c = ss.get()) != EOF)
	{
		cout << c;
	}
	//5.关闭文件
	ss.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}