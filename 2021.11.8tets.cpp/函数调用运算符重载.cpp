#include<iostream>
using namespace std;
//�����������أ��Ƿǳ����ģ�����ʽ���̶��������Ǵ�ӡ�ĺ������أ�Ҳ�����ǽ�����ӵĵ�
class myprintf
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
	int operator()(int a, int b)
	{
		return a + b;
	}
};
class myadd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void printff(string www)
{
	cout << www << endl;
}
void test01()
{
	//�����Ϊ�����������������
	myprintf qq;
	qq("hello word");
	//����������Ĵ�ӡ����
	printff("hello word");
}
void test02()
{
	myadd oo;
	int s=oo(2, 3);
	cout << s << endl;
	//������ǣ����������ĵ��ã�myadd()(3,4)��������������
	cout << myadd()(2, 4) << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}