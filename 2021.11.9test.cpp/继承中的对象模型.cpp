#include<iostream>
using namespace std;
class father
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son :public father
{
public:
	int m_m;
};
void test()
{
	cout << "sizeof son ��ռ�Ŀռ�" <<sizeof(son)<< endl;
	//16
	//�����еĳ�Ա�����������У���3+1��*4=16���ֽ�
}
int main()
{
	test();
	system("pause");
	return 0;
}