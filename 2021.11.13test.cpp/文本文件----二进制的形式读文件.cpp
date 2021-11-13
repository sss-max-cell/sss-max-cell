#include<iostream>
using namespace std;
#include<fstream>
class person
{
public:
	char m_name[22];
	int m_age;
};
void test()
{
	fstream qq;
	qq.open("person test.txt", ios::binary | ios::in);
	if (!(qq.is_open()))
	{
		cout<<"文件打开失败"<<endl;
		return;
	}
	person p;
	qq.read((char*)&p, sizeof(person));
	cout << p.m_name << p.m_age;
	qq.close();
	
}
int main()
{
	test();
	system("pause");
	return 0;
}