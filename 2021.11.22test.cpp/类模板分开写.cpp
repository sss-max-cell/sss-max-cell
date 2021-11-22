#include<iostream>
using namespace std;
//对于类中的成员函树，如果分开写的话会出现编译问题，原因是：链接阶段
//并不会去实现类模板中的函数，进而在编译阶段无法识别其中的函数
//解决方法：1、包含头文件的后缀改成.cpp
//2、包含头文件改成.hpp但是要把类模板中的成员函数，极其实现都放到这个文件下
int main()
{
	system("pause");
	return 0;
}