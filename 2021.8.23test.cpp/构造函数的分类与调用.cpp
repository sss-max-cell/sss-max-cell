#include<iostream>
using namespace std;
//���캯���ķ��༰����
//����
//���ղ�������  �޲ҹ��죨Ĭ�Ϲ��죩    �вι���
//�������ͷ���  ��ͨ����			   ��������
class person
{
public:
	person()//�޲κ���
	{
		
		cout << "person �޲ι��캯���ĵ��� " << endl;
	}
	person(int a)//�вκ���
	{
		age = a;
		cout << "person �вι��캯���ĵ��� " << endl;
	}
	//��������
	person(const person& p)//���Ʋ��ܰ��ļ����������
	{
		//������������ϵ��������ԣ������������ϡ�
		age=p.age;
		cout << "person �����вι��캯���ĵ��� " << endl;
	}
	~person()
	{
		cout << "person ���캯���ĵ��� " << endl;
	}
	int age;
};
//����
void test01()
{
	//1�����ŷ� ����ȽϺ�
	//person p1;//Ĭ�Ϲ��캯������
	//person p2(10);//�вι��캯��
	//person p3(p2);//�������캯��
	//cout << "p2������ " << p2.age << endl;
	//cout << "p3������ " << p3.age << endl;
	//person p4();//�������������Ϊ��һ�����������������ڴ�������
	//2����ʾ��
	//person p1;//�޲�
	//person p2 = person(10);//�в�
	//person p3 = person (p2);//����
	person(10);//���������ص㣺��ǰִ�н�����ϵͳ���������յ���������
	cout << "aaaaa" << endl;
	//ע�⣺��Ҫ���ÿ������캯��  ��ʼ����������
	 	   //person(p3) ����������Ϊ person(p3)=====person p3;	
	//3����ʽת����
	person p4 = 10;//�൱��д��   person p4=person(10);
	person p5=p4//��������
}
int main()
{
	test01();
	system("pause");
}