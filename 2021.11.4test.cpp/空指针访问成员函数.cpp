#include<iostream>
using namespace std;
class person
{
public:
	void personname()
	{
		cout << "person��ʾ���ֺ����ĵ���" << endl;
	}
	void personage()
	{
		if (this == NULL)//���д����ж�this�ǲ���ָ���ָ�룬�������������
		{
			return ;
		}
		cout << "����Ϊ " <<this-> m_age << endl;//��ʵҪ��ʾthisָ���Ҫ�����������
	//��ʱthisָ��Ŀ�ָ�룬�����޷����з���m_age����˻ᷢ������
	}
	int m_age;
};
void test01()
{
	person* p = NULL;
	p->personname();
	p->personage ();
}
int main()
{
	test01();
	system("pause");
	return 0;
}