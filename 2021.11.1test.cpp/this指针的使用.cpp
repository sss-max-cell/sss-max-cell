#include<iostream>//�����̫������������в���
using namespace std;
class Person
{
public:
	//1�������Ա�������β����������
	Person (int age)//����ǹ��캯��
	{
		//this ָ����Ǳ����ó�Ա���� �������� ��p1���൱��this���ָ��ָ��ľ��ǣ��¶���Ķ���
		this->age = age;
		//��ַ�á�>���ṹ��/���������  ��.
	}
	//2��
	Person& personaddage(Person &p)
	{
		this->age = p.age;
		return *this;
	}
	int age;
};
void test01()
{
	Person p1(18);
	cout << "p1������ " << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);
	//p2.personaddage(p1);����ǵ�������ʱ����д�ģ�p2Ϊ���󣬵������е�personaddage����
	p2.personaddage(p1).personaddage(p1).personaddage(p1);
	cout << "p2������ " << p2.age;
}
int main()
{
	test02();
	return 0;
}