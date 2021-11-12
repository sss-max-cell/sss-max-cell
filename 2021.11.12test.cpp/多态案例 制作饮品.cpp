#include<iostream>
using namespace std;
class father
{
public:
	//煮水
	virtual void zhucha() = 0;
	//冲泡
	virtual void chongpao() = 0;
	//倒入杯中
	virtual void daorubeizhong() = 0;
	//加入佐料
	virtual void jiaruzuoliao() = 0;
	void make()
	{
		zhucha() ;
		chongpao();
		daorubeizhong();
			jiaruzuoliao();
	}
};
//咖啡
class CoCo :public father
{
public:
	//煮水
	virtual void zhucha()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void chongpao()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void daorubeizhong()
	{
		cout << "倒入玻璃杯中" << endl;
	}
	//加入佐料
	virtual void jiaruzuoliao()
	{
		cout << "加入蜂蜜，加入可可" << endl;
	}
};
//制作百香果
class popo :public father
{
public:
	//煮水
	virtual void zhucha()
	{
		cout << "煮百岁山" << endl;
	}
	//冲泡
	virtual void chongpao()
	{
		cout << "冲泡柠檬" << endl;
	}
	//倒入杯中
	virtual void daorubeizhong()
	{
		cout << "倒入塑料杯中" << endl;
	}
	//加入佐料
	virtual void jiaruzuoliao()
	{
		cout << "加入香蕉，加入苹果" << endl;
	}
};
//写出制作函数
void dowork(father *abs)
{
	abs->make();
	delete abs;
}
void test()
{
	//制作咖啡
	cout << "制作咖啡" << endl;
	dowork(new CoCo);
	cout << "-----------------" << endl;
	//制作百香果
	cout << "制作百香果" << endl;
	dowork(new popo);

}
int main()
{
	test();
	system("pause");
	return 0;
}