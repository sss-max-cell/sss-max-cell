#include<iostream>
using namespace std;
//ǳ�������򵥵ĸ�ֵ����
//������ڶ�����������ռ䣬���п����������
class person
{
public:
	person(int age, int height)
	{
		m_age = age;
		m_height = new int (height);
	}
	~person()
	{
		if (m_height != NULL)//���ڳ���Ա�ڶ��������˿ռ䣬���������Ҫ�������ɾ������
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "person���������ĵ���" << endl;
	}
	person(const person& p)
	{
		m_age = p.m_age;
		//ǳ��Ŀ���
		// m_height=p.m_height;���Ǽ򵥵ĸ�ֵ������
		//���Ŀ���
		m_height = new int (*p.m_height);//���ڲ������ظ�ɾ����������˽����ڿ��ٿռ䡣
		cout << "person�������캯���ĵ���" << endl;
	}
	
	int m_age;
	int *m_height;//����һ����߶��󣬽���ŵ��������䶨��ı����ǵ�ַ
};
void test01()
{
	person p(21, 180);
	cout << "p������Ϊ" << p.m_age << "p�����Ϊ" << *(p.m_height) << endl;
	person p1(p);
	cout << "p1������Ϊ" << p1.m_age << "p1�����Ϊ" << *(p1.m_height) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}