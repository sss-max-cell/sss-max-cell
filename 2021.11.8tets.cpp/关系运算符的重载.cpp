#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	//����==�����������
	bool operator==(person& p)
	{
		if ((p.m_age == this->m_age) && (p.m_name == this->m_name))
			return true;
		else
			return false;

	}
	//���ڣ�=�����������
	bool operator!=(person & p)	
	{
		if ((p.m_age == this->m_age) && (p.m_name == this->m_name))
			return false;
		else
			return true;

	}
public:
	string m_name;
	int m_age;
};
void test()
{
	person p1("toy", 19);
	person p2("tow", 19);
	if (p1 == p2)
	{
		cout << "p1��p2��ͬ" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}
	if (p1!=p2)
	{
		cout << "p1��p2����ͬ" << endl;
	}
	else
	{
		cout << "p1��p2���" << endl;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}