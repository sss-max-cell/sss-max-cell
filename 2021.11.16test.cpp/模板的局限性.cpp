#include<iostream>
using namespace std;
//���ں���ģ����˵�������������ܵģ����봫��person�������ͣ�
//���Ͳ�������ж�������ڿ����������⽫����̽��
class person
{
public:
	//���ppublic��һ��Ҫ���ϣ���Ϊ���ӵĻ���������Ϊ����˽�еģ���ô�������
	//���캯����ʱ�򣬾ͻᱨ��
	person(string name,int age)
	{
		m_age = age;
		m_name = name;
	}
public:
	int m_age;
	string m_name;
};
template<class T>
bool sweap(T &a,T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//�����������������⣬���ǿ��Խ���������ķ������н��
//���߲��� ��������صķ��������ǿ��Ե�
template<>bool sweap(person &a, person &b)
{
	if (a.m_age == b.m_age && a.m_name == b.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}  
void test()
{
	person p1("tt",22);
	person p2("tt",22);
	bool ret=sweap(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}