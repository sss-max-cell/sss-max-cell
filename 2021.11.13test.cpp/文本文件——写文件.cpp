#include<iostream>
using namespace std;
#include<fstream>
void test()
{
	//1.����ͷ�ļ� fstream
	//2����������
	ofstream qq;
	//3ָ���򿪷�ʽ
	qq.open("text.txt", ios::out);
	//4д����
	qq << "����������" << endl;
	qq << "���䣺22" << endl;
	qq << "�Ա�nan " << endl;
	//5���ļ�
	qq.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}