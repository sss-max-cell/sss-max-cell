//01��ĳ���Ӧ��
#include<iostream>
//Բ����
const double PI = 3.14;
using namespace std;
//class �������һ����
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	int m_r;
	//����
	//��Ϊ
	double calculate()//����������Ҫ��һ��ſ��ԣ����ֳ���һ���ࡣ
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��Բ��������������
	Circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculate() << endl;
}


//02���Ӧ��
#include<iostream>
using namespace std;
class student//���ѧ����
{
	//���е� ���Ժ���Ϊ��ͳ��Ϊ ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����
public://����Ȩ��

	//����
	string m_name;//����
	int m_id;//ѧ��
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������" << m_name << "    ѧ�ţ�" << m_id << endl;
	}
	void setname(string name)
	{
		m_name = name;
	}
	void setid(int iid)
	{
		m_id = iid;
	}
};
int main()
{
	//����һ�������ѧ��  ʵ��������
	student s1 ;
	s1.m_id = 02;
	s1.m_name = "³��";
	s1.setname("½��");//����Ҳ���Խ��и�ֵ��
	s1.setid(222222);
	//��ʾѧ������Ϣ
	s1.showStudent();
}


//03����Ȩ��
#include<iostream>
using namespace std;
//����Ȩ��
//����
//����Ȩ�� public			��Ա���ڿ��Է��ʣ�������Է���
//����Ȩ�� protected		��Ա���ڿ��Է��ʣ����ⲻ���Է���	���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private			��Ա���ڿ��Է��ʣ����ⲻ���Է���	���Ӳ����Է��ʸ��׵�˽������
//���к����ܲ��ܱ����� ����һ����

class person
{
public:
	//����Ȩ��
	string m_name;//����
protected:
	//����Ȩ��
	string m_car;//����
private:
	//˽��Ȩ��
	int m_password;//���п�����
public:
	void func()
	{
		m_name = "����";
		m_car = "������";
		m_password = 123456;
	}
};
int main()
{
	person p1;
	p1.m_name = "luha";
	//p1.m_car = "benchi"//����Ȩ������ ��������ʲ���
	//p1.m_password = 123;//˽��Ȩ�޵����ݣ���������ʲ���
}


//04class ��struct ������
#include<iostream>
using namespace std;
class c1
{
	int a; //Ĭ��Ȩ���� ˽��
};
struct c2
{
	int b; //Ĭ��Ȩ���� ����
};
int main()
{
	//struct �� class����
	//struct Ĭ��Ȩ���� ����
	//class  Ĭ��Ȩ���� ˽��
	c1 a1;
	//a1.a = 100;//��������class��Ĭ��Ȩ�� ��������治�ܱ�����
	c2 a2;
	a2.b = 100;//��������struct��Ĭ��Ȩ���ǹ��� ����������ǿ��Ա����ʵ�
}