#include<iostream>
using namespace std;
class father
{
public:
	father()
	{
		cout << "father���캯���ĵ���" << endl;
	}
	~father()
	{
		cout << "father���������ĵ���" << endl;
	}
};
class son :public father
{
public:
	son()
	{
		cout << "son���캯���ĵ���" << endl;
	}
	~son()
	{
		cout << "son���������ĵ���" << endl;
	}
};
void test()
{
	son pp;
}
int main()
{
	test();
	system("pause");
	return 0;
}
//�̳��еĹ����������˳������
//father���캯���ĵ���
//son���캯���ĵ���
//son���������ĵ���
//father���������ĵ���
//�����ǣ��׷����ͺڷ���
//�����������Ҳ�ᴴ���������