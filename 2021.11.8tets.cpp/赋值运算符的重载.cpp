#include<iostream>
using namespace std;
class person
{
public:
	person(int a)
	{
		m_age = new int (a);//���ڴ����ڶ���������ݣ���Ҫ����Ա�ֶ��ͷţ�����Ҫд��������
	}
	//���ô����������������ظ����ͷ����Σ���˱������ط�����
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
		}
		m_age = NULL;
	}
	//���ظ�ֵ�����
	person& operator=(person &p1)//p2.operate=(p1);
	{
		//m_age=p1.m_age //�������ṩ��ǳ����
		//���ж���p2���Ƿ������ݣ��еĻ��Ƚ����ͷŸɾ�
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p1.m_age);
		return *this;//ʹ���ʽ�ӿ�������
	}
public:
	int *m_age;
};
void test01()
{
	person p1 (18);
	cout << "p1������Ϊ" << *p1.m_age << endl;
	person p2(20);
	p2 = p1;
	cout << "p2������Ϊ" << *p2.m_age << endl;
	person p3(30);
	p3 = p2 = p1;
	cout << "p3������Ϊ" << *p3.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}