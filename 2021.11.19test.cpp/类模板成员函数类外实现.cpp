#include<iostream>
using namespace std;
template<class T, class W>
class person
{
public:

	person(T name, W age);
	void showprint();
public:
	T m_name;
	W m_age;
};
//��������ʵ��
//���е�һ�е�template<class T,class W>�������Ǳ�֤��������ʶT��W
//�ڶ�����personǰ��<T, W>����������ģ�������ʵ��
template<class T,class W>
person<T, W>::person(T name, W age)
{
	m_name = name;
	m_age = age;
}
template<class T,class W>
void person<T, W>::showprint()
{
	cout << "����" << m_age;
	cout << "����" << m_name;
}
void test()
{
	person<string, int> p("tom", 11);
	p.showprint();
}
int main()
{
	test();
	system("pause");
	return 0;
}