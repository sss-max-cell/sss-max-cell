#include<iostream>
using namespace std;
#include<fstream>
void test()
{
	//1.包含头文件 fstream
	//2创建流对象
	ofstream qq;
	//3指定打开方式
	qq.open("text.txt", ios::out);
	//4写内容
	qq << "姓名：张三" << endl;
	qq << "年龄：22" << endl;
	qq << "性别：nan " << endl;
	//5关文件
	qq.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}