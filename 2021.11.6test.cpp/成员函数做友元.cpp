#include<iostream>
using namespace std;
class building;
class goodgay
{
public:
	building* qq;
	void test();//让他可以访问，building中的任何对象
	void test2();//让他不能访问，building中的某些对象
	goodgay();
};
class building
{
	friend void goodgay:: test();
	//有了这句话，就使了test成为了，building的好朋友啦，使的他可以访问，building内的私有成员
public:
	building();
public:
	string keting;
private:
	string woshi;
};
building::building()
{
	keting = "客厅";
	woshi = "卧室";
}
goodgay::goodgay()
{
	qq = new building;
}
void goodgay::test()
{
	cout << "好基友正在访问 " << qq->keting << endl;
	cout << "好基友正在访问 " << qq->woshi << endl;//不标注是不行的
}
void goodgay::test2()
{
	cout << "好基友正在访问 " << qq->keting << endl;
	//cout << "好基友正在访问 " << qq->woshi << endl;现在他已经变的不能再次访问卧室啦
}
void test()//测试代码
{
	goodgay ww;
	ww.test();
	ww.test2();
}
int main()
{
	test();
	system("pause");
	return 0;
}