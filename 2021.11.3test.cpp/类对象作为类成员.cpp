#include<iostream>
using namespace std;
#include<string>
//�������Ϊ���Ա
class phone
{
public:
	phone(string namephone)
	{
		M_nphone = namephone;
	}
	string M_nphone;
};
class person
{
public:
	//���и�ֵ����
	//����m_pname(pname)�ȼ��ڣ�phone M_pname=pname;
	person(string name, string pname) :M_name(name), M_pname(pname)
	{

	}
	//�����˵�������������ֻ�
	string M_name;
	//�����ֻ�
	phone M_pname;
};
//����������Ϊ�Լ���Ķ���ʱ���ȹ����������࣬�ڹ����Լ�����.������˳�������෴
//����ʱ���Ⱥ��ӣ���ĸ�塣����ʱ����ĸ�壬����
void test01()
{
	person p("����", "iphone 13");
	cout << p.M_name << "����"<<p.M_pname.M_nphone << endl;//����Ϊ�������󣬹���Ҫ������.
}
int main()
{
	test01();
	system("pause");
	return 0;
}