#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ss;
	//3.���ļ��������ж��Ƿ�򿪳ɹ�
	ss.open("text.txt", ios::in);
	//����is_open����������ɹ��Ļ��᷵��1�����򷵻�����
	if (!ss.is_open())
	{
		cout << "��ʧ��" << endl;
		return;
	}
	//4.������
	//��һ�ֶ�ȡ��ʽ
	/*char buf[222] = { 0 };
	while (ss >> buf)
	{
		cout << buf << endl;
	}*/
	//�ڶ��ֶ�ȡ����
	//char buf[222] = { 0 };
	//while (ss.getline(buf, 222))
	//{
	//	cout << buf << endl;
	//}
	//�����ַ���
	/*string buf;
	while (getline(ss, buf))
	{
		cout << buf << endl;
	}*/
	//�����ַ���,���Ƽ���
	char c;
	//�����һ��һ�����ģ��ʲ���Ҫendl��
	while ((c = ss.get()) != EOF)
	{
		cout << c;
	}
	//5.�ر��ļ�
	ss.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}