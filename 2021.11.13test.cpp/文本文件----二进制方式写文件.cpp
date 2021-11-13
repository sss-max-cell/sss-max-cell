#include<iostream>
using namespace std;
#include<fstream>
class person
{
public:
	char m_name[20] = { 0 };
	int m_age;
};
void test()
{
	person ss = { "уехЩ",12 };
	fstream aa("person test.txt", ios::out | ios::binary);
	aa.write((const char*)&ss, sizeof(person));
	aa.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}