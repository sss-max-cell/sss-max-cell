#include<iostream>
using namespace std;
//��ǰ�ñ�����֪��person���ʵ��
template<class T1, class T2>
class person;

/// <summary>
/// 
/// </summary>
/// <typeparam name="T1"></typeparam>
/// <typeparam name="T2"></typeparam>
/// <param name="p"></param>
//��������������

//���ȫ�ֺ�����������ʵ�ֵģ���Ҫ��ǰ��ȫ�ֺ���֪������˰����ŵ�ǰ��
template<class T1, class T2>
void printff2(person<T1, T2> p)
{
	cout << p.m_age << endl;
	cout << p.m_name << endl;
}

template<class T1,class T2>
class person
{
public:
	//��ӡ����������ʵ�ְ�
	friend void printff1(person<T1,T2> &p)
	{
		cout << p.m_age<<endl;
		cout << p.m_name << endl;
	}
	//����friend�����ȫ�ֺ��������ӵĻ�����ȫ�ֺ���


	//��ӡ����������ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ�����������ʵ�ֵģ���Ҫ��ǰ��ȫ�ֺ���֪��
	friend void printff2<>(person<T1, T2> p);
	person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

void test()
{
	person <string, int> p("tom", 33);
	printff1(p);
}
void test02()
{
	person<string, int>p("jj", 99);
	printff2(p);
}
int main()
{
	test();
	test02();
	system("pause");
	return 0;
}