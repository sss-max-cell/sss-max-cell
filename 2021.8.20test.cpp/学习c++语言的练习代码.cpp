//01
//#include<iostream>
//using namespace std;
////�����ں����ⲿ�ı�����ȫ�ֱ���
//int g_a = 10;//����������ȫ�ֱ���
//int g_b = 10;
//const int c_g_a = 10;//��������const���ε�ȫ�ֱ���
//const int c_g_b = 10;
//int main()//�����ں����ڲ��ı����Ǿֲ�����������ջ��
//{
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << (int)&a << endl;
//	cout << (int)&b << endl;
//	//ȫ����
//	//ȫ�ֱ�������̬��������������Щ����ȫ������
//	//��̬����
//	static int s_a = 10;//���������Ǿ�̬����
//	static int s_b = 10;
//	cout << (int)&s_a << endl;
//	cout << (int)&s_b << endl;
//	//ȫ�ֱ���
//	cout << (int)&g_a << endl;
//	cout << (int)&g_a << endl;
//	//����
//	//�ַ�������
//	char arr[20] ="hello word";//�����ַ����Ǿֲ�����
//	cout << (int)&arr << endl;
//	cout <<(int) &"hello word"<< endl;//�����ַ�������ȫ����
//	//const ���εĳ���
//	//const���ε�ȫ�ֱ���
//	cout << (int)&c_g_a << endl;
//	cout << (int)&c_g_a << endl;
//	//const���εľֲ�����,,��Щ������ȫ��������סֻҪ���оֲ��Ͳ���ȫ����
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << (int)&c_l_a << endl;
//	cout << (int)&c_l_b<< endl;
//}
//02
//#include<iostream>
//using namespace std;
////ջ�����ݵ�ע�����������Ҫ���ؾֲ������ĵ�ַ
////ջ���������ɱ����������ٺ��ͷ�
////ջ����ţ��ֲ��������βΣ�����ͻᱻ�ͷš�
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣���Ϊ���������˱���
//	cout << *p << endl;//�ڶ���������ݾͲ��ڱ�������Ϊջ���ľֲ�����������ͻᱻ�ͷš�
//}
//03
//#include<iostream>
//using namespace std;
////�������� ����Ա�����п��ٺ��ͷŵģ��������Ա�����ͷţ���ô���ϵͳ������ͷ�
//int* func()
//{
//	//����NEW�ؼ��֣����Խ����ݿ��ٵ�����
//	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ����˶���
//	int *p=new int(10);
//	return p;
//}
//int main()
//{
//	int* a = func();
//	cout << *a<< endl;
//	cout << *a << endl;
//}
//04���ڿ���������о�������
//#include<iostream>
//using namespace std;
//int* func()
//{
//	//�ڶ���������������
//	//new���ص��� ���������͵�ָ��
//	int* p = new int(10);
//	return p;
//}
//void test()
//{
//	//�ڶ�������10���͵�����
//	int* arr = new int[10];//10����������10������Ԫ��
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//�ͷŶ���������
//	//�ͷ�������Ҫ��һ��[]
//	delete[]arr;
//}
//	void main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//����������Ҫ���ͷţ����ùؼ���delete
//	delete p;
//	//cout << *p << endl;//�ڴ��Ѿ��ͷţ��ڽ��з��ʾ��ǷǷ�����
//	test();
//}
//05���ã����Ǹ�����ȡ����
//#include<iostream>
//using namespace std;
//int main()
//{
//	//���õĻ����﷨
//	int a = 10;
//	int& b = a;//����ֻ�ǣ����ڱ���ȡ�˱�����֡�����������¿��ٿռ䣬����һ���ı���һ��Ҳ��ı�
//	cout << a << endl;//������������Ҫ���������г�ʼ����b�Ѿ���Ϊa�ı�������ô���Ͳ������������ı�����
//	cout << b << endl;//���ǿ�У��ı����ã���ôֻ�Ǹ�ֵ�������������޸����õĶ���
//	b = 100;
//	cout << a << endl;
//	cout << b << endl;
//	a = 11;
//	cout << a << endl;
//	cout << b << endl;
//}
//06��������������
//#include<iostream>
//using namespace std;
////�����������ĺ���
//void swap(int &z,int &x)//��������ô��ݣ����Խ��н���������ֵ��ֵ
//{
//	int v = 0;
//	v = z;
//	z = x;
//	x = v;
//}
//int main()
//{
//	int a = 9;
//	int b = 2;
//	/*int &s = a;
//	int &f = b;*/
//	swap(a, b);
//	cout << a << endl;
//	cout << b << endl;
//}

//#include<iostream>
//using namespace std;
////����������ֵ�ķ�������
//int& test()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	//1����Ҫ���ؾֲ�����������
//	//2�������ĵ��ÿ�����Ϊ��ֵ
//	int& ret = test();
//	cout << ret<<endl;
//	cout << ret << endl;
//	test() = 1000;//���е���ֵ����
//	cout << ret << endl;
//	cout << ret << endl;
//
//}
#include<iostream>
using namespace std;
void showvalue(const int& val)//�����������һ�� const���������޸�val
{
	cout << val << endl;//����ı������ֵ�������Ҳ�ܱ���
}
int main()
{
	//const int& ref = 10;//���ú��治��ֱ�ӷ�һ�������������������Ե�ԭ���Ǳ����������˸ı䣬
	////����� int tem=10; int &ref=tem;�����Ҳ���ԭ��
	////ref=20;//����const���ܱ��޸���
	int a = 10;
	showvalue(a);
}