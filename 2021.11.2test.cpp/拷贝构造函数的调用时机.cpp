#include<iostream>
using namespace std;
//�������캯���ĵ���ʱ��

class person
{
public:
	person()
	{
		cout << "person���캯���ĵ���" << endl;
	}
	person(int age)
	{
		cout << "person�вι��캯���ĵ���" << endl;
		m_age = age;
	}
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person�������캯���ĵ���" << endl;
	}

	~person()
	{
		cout << "person���������ĵ���" << endl;
	}
	int m_age;
};
//1��ʹ��һ���Ѿ�������Ķ�������ʼһ���µĶ���
void test01()
{
	person p1(18);
	person p2 (p1);
	cout << "p2������ " << p2.m_age<<endl;
}
//2��ֵ���ݵķ�ʽ��������������ֵ
void dowork(person pp)
{
	//���ǿ��������ģ�����ı�ԭ����ֵ
}
void test02()
{
	person p;
	dowork(p);
}
//3��ֵ��ʽ���ؾֲ�����
person dowork()
{
	person ppp;
	return ppp;//��Ҫ����������person,�����¿���һ�ݷ���
}
void test03()
{
	person aa = dowork();
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}