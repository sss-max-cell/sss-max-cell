//01
#include<iostream>
using namespace std;//c++������
int main()
{
	cout << "This is a cpp program.";
	return 0;
}
//02
#include<iostream>
#define day 7
#include<string>
using namespace std;
int main()
{
	cout << "һ���У�" << day << "��" << endl;
	char arr[] = "hello word";//c���Ե��ַ�������Ҫ�����ţ���Ҫ���ַ���������������
	string arrq = "hello word";//��c++�ķ�ʽ����д�ַ�����string ������=���ַ�����
	cout << arr << endl;
	cout << arrq << endl;
	return 0;
}
//03
#include<iostream>
using namespace std;
int main()
{
	bool flag = true;//bool��������ֻռһ���ֽڣ�ֻ�ܴ�ӡ��1����0
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	flag = 11;//ֻ������0���Ŵ�ӡ0������������¶��Ǵ�ӡ1
	cout << flag << endl;
}
//04
#include<iostream>
using namespace std;
int main()
{
	//1������
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;//�����������ݵ�����
	cout << "���ͱ���a= " << a << endl;
	//2,������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ�� " << endl;
	cin >> f;
	cout << "������f��ֵ�� " << f << endl;
	//3,�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ " << endl;
	cin >> ch;
	cout << "�����ͱ���ch��ֵ�� " <<ch<< endl;
	//4,�ַ�����
	string arr = "abcdef";
	cout << "����ַ���arr��ֵ " << endl;
	cin >> arr;
	cout << "�ַ���arr��ֵ�� " <<arr<< endl;
	//5������
	bool fase = false;
	cout << "����������͵�fase���и�ֵ " << endl;
	cin >> fase;//�������ͳ���0������������붼����
	cout << "�������͵�ֵ�� " <<fase<< endl;
}
//05
#include<iostream>
using namespace std;
int main()
{
	cout << "����������do while���0~9������" << endl;
	int count = 0;
	do
	{
		cout << count << endl;
		count++;
	} while (!(count == 10));//������ж�������������� count<10;
}
//06
#include<iostream>
using namespace std;
int main()
{
	int a = 233;
	cout << a / 10/10 % 10 << endl;
	cout << a / 100 << endl;
}

