#include<iostream>
using namespace std;
#include<string>
//1��������������Ҫ���ڣ�����ָ���ͷ���������
//2���������û�ж����ϵ����ݣ�����д��
//3�����鹹�ʹ��������Ļ�����Ҳ����ʵ��������
class animal
{
public:
	animal()
	{
		cout << "animal���캯����Ӧ��" << endl;
	}
	//���麯��
	virtual void speak() = 0;
	//������
	//���������������Խ������ָ���ͷ��������ʱ���ͷŲ��ɾ�������
	/*virtual~animal()
	{
		cout << "animal����������Ӧ��" << endl;
	}*/
	//���鹹
	//���˴��鹹�������Ҳ�����鹹�࣬�޷�ʵ��������
	virtual ~animal()=0;
};
//���ڴ��鹹��Ҳ������ʵ�֣���Ϊ�����ܸ�����Ҳ�����ݿ��ٵ�������
animal::~animal()
{
	cout << "animal��������������Ӧ��" << endl;
}
class cat :public animal
{
public:
	cat(string name)
	{
		m_name = new string(name);
		cout << "cat���캯���ĵ���" << endl;
	}
	virtual void speak()
	{
		cout << *m_name << "Сè��˵��" << endl;
	}
	~cat()
	{
		cout << "cat���������ĵ���" << endl;
		delete m_name;
		m_name = NULL;
	}
	string* m_name;//���Ĺ����ĸ��ֺ�����������Ϊ��
};
void test()
{
	animal* uu = new cat("tom");
	uu->speak();
	delete uu;
	//����ָ��ʱ
	//�����������ܵ���cat�������������޷��Կ���m_name�����ͷţ�������ͷŲ��ɾ�
}
int main()
{
	test();
	system("pause");
	return 0;
}