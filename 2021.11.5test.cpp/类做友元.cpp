#include<iostream>
using namespace std;
#include<string>
class buliding;
class friendgay
{
	
public:
	friendgay();
	void vist();
	buliding* qq;
};
class buliding
{
	friend class friendgay;
public:
	buliding();
public:
	string m_keting;
private:
	string m_woshi;
};
buliding::buliding()
{
		 m_keting = "����";
		 m_woshi = "����";
}
friendgay::friendgay()
{
	qq = new buliding;
}
void friendgay::vist()
{
	cout << "�û������ڷ��� " << qq->m_woshi << endl;
	cout << "�û������ڷ��� " << qq->m_keting << endl;
}
void test()
{
	friendgay pp;
	pp.vist();//���������ǣ������������
}
int main()
{
	test();
	system("pause");
	return 0;
}