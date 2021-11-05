#include<iostream>
using namespace std;
#include<string>
class buliding
{
	friend void friendgay(buliding& ba);
	//这个friend是友元，使这个函数与bulid成为好朋友，使得这个函数可以访问这个类内的私有变量
public:
	 buliding()
	{
		 m_sittingroom = "客厅";
		 m_bedrood = "卧室";
	}
public:
	string m_sittingroom;//客厅
private:
	string m_bedrood;
};
void friendgay(buliding &ba)//或者这样写，（buliding *nn）
//后面是引用，用.对于&符号，相当于再重新创建的一个新的对象
{//而里面如果是*，相当于是传的地址，因此用->来进行访问
	cout << "好基友正在访问 " << ba.m_sittingroom << endl;//或者这样写nn->m_sittingroom 
	cout << "好基友正在访问 " << ba.m_bedrood << endl;
}
void test()
{
	buliding qqq;
	friendgay(qqq);//或者对于上面的或者情况，可以这样写，（*qqq）
}
int main()
{
	test();
	system("pause");
	return 0;
}