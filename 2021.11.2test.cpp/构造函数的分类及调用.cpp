#include<iostream>
using namespace std;
//���캯���ķ��༰����
//����
//���ղ������ࣺ�вΣ�Ĭ�ϣ����޲�
//�������ͷ��ࣺ��ͨ�Ϳ���
class person
{
public:
	//���캯��
	person()
	{
		cout << "person�޲ι��캯���ĵ���" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person�вι��캯���ĵ���" << endl;
	}
	~person()
	{
		cout << "person���������ĵ���" << endl;
	}
	//�������캯��
	person(const person& p)
	{
		//���������Կ�����������
		age=p.age;
		cout << "person���������ĵ���" << endl;
	}
	int age;
};
//����
void test01()
{
	//1.���ŷ�����������ȽϺ�
	//person p1;//Ĭ�Ϲ��캯���ĵ���
	//person p2(18);
	//person p3(p2);
	//ע������
	//1,����Ĭ�Ϲ��캯��ʱ����Ҫ��С���ţ���С���Ż��ü������Ϊ�ǣ�����������
	/*cout << "p2�����䣺" << p2.age << endl;
	cout << "p3�����䣺" << p3.age << endl;*///������ÿ������캯��
	//2.��ʾ��
	person p1;
	person p2 = person(10);//�вι���
	person p3 = person(p2);//��������
	//ע�����
	//person(10);//�������󣬵�ǰ��ִ�н�����ϵͳ�������ͷź�.���൱���вι���
	//��Ҫ���ÿ������캯������ʼ�������󣬱���������Ϊperson(p3)===person p3 ������ظ�����
	//3.��ʽת����
	person p4 = 10;//�൱��person p4=person(10);//�вι���
	person p5 = p4;//��������
}
int main()
{
	test01();
	system("pause");
	return 0;
}