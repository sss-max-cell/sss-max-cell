#include<iostream>
using namespace std;
template<class NameType, class AgeType=int>
class person
{
public:
	person(AgeType age, NameType name)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void showbase()
	{
		cout << this->m_name;
		cout << m_age;
	}
	NameType m_name;
	AgeType m_age;
};
void test()
{
	//1����ĺ���ģ�壬ֻ����ָ�������ͷ�ʽ,���Լ���֪��ʲô��������
	//��Ҫ�˸���������ȥ.t��û���Զ��Ƶ��Ĺ�Ч
	person<string,int> p1(18, "����");
	p1.showbase();
	//2����ģ���ڲ����б��п�����Ĭ�ϵ���ʽ
	person<string> p2(18, "����");
	p2.showbase();
}
int main()
{
	test();
	system("pause");
	return 0;
}

//��ģ���У������ĵ���ʱ��
//��ģ����ֻ�к������ٱ�����ʱ���Żᴴ���������