#include<iostream>
using namespace std;
//��ģ����Ϊ�������������ִ��뷽ʽ
template<class T1,class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void show()
	{
		cout << m_age;
		cout << m_name;
	}
	T1 m_name;
	T2 m_age;
};
//1��ָ����������
void showw(person<string, int>&p1)
{
	p1.show();
}
void test01()
{
	person <string ,int>p1("�����", 111);
	showw(p1);
}
//2������ģ�廯
template<class T1,class T2>
void showw2(person<T1,T2>& p1)
{
	p1.show();
	//��T1��T2�����͵ķ���
	cout << "T1������ " << typeid(T1).name() << endl;
	cout << "T2������ " << typeid(T2).name() << endl;
}
void test02()
{
	person <string, int>p2("��˽�", 222);
	showw2(p2);
}


//3��������ģ�廯
template<class T>
void showw3(T& p1)
{
	p1.show();
	cout << "T������ " << typeid(T).name() << endl;
	
}
void test03()
{
	person <string, int>p3("��ɮ", 333);
	showw3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}