#include<iostream>
using namespace std;
//������
class animal
{
public:
	int m_age;
};
//������̳н�����μ̳е�����
//�̳�֮ǰ���Ϲؼ���virtual��ʹ������̳�
//animal�࣬��Ϊ�����
//ͨ����̳еķ�ʽ����ʹm_age���ݱ��һ��
//����
class sleep :public virtual animal
{

};
//����
class tuo :public virtual animal
{

};
class sleeptuo :public sleep, public tuo
{
	
};
void test01()
{
	sleeptuo qq;
	qq.sleep::m_age = 222;
	qq.tuo::m_age = 111;
	cout << "�������Ϊ" << qq.sleep::m_age << endl;
	cout << "tuo������Ϊ" << qq.tuo::m_age << endl;
	cout << "��tuo������Ϊ" << qq.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}