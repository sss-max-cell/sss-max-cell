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
		 m_keting = "客厅";
		 m_woshi = "卧室";
}
friendgay::friendgay()
{
	qq = new buliding;
}
void friendgay::vist()
{
	cout << "好基友正在访问 " << qq->m_woshi << endl;
	cout << "好基友正在访问 " << qq->m_keting << endl;
}
void test()
{
	friendgay pp;
	pp.vist();//这句的作用是，调用这个函数
}
int main()
{
	test();
	system("pause");
	return 0;
}