#include<iostream>
using namespace std;
//��Ա�������Ա�����Ƿֿ��洢��
class person 
{
public:
	int a;//�Ǿ�̬��Ա�������������ϵĶ���
	static int b;//��̬��Ա���������������ϵĶ���
	void func01() {};//��̬��Ա���������������ϵĶ���
	static void func02() {};//��̬��Ա���������������ϵĶ���
	//��Ҫ��סֻ�зǾ�̬��Ա���������������ϵĶ���
};
int person::b = 0;
void test01()
{
	person p;
	cout << "����ն���ռ�ÿռ�" << endl;
	//ϵͳ�����һ���ռ�1���ֽڣ���Ϊ�����ֿն���ռ��λ�ã�ÿ���ն��󶼻�ռ��һ�����ص�λ��
	cout << sizeof(p) << endl;//1
}
void test02()
{
	person p;
	cout << sizeof(p) << endl;//�����������������ռ���ڴ�ռ�
}
int main()
{
	///test01();
	return 0;
}