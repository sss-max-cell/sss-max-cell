#include<iostream>
using namespace std;
//动物类
class animal
{
public:
	int m_age;
};
//利用虚继承解决菱形继承的问题
//继承之前加上关键字virtual，使其变成虚继承
//animal类，成为虚基类
//通过虚继承的方式，来使m_age数据变成一份
//羊类
class sleep :public virtual animal
{

};
//驼类
class tuo :public virtual animal
{

};
class sleeptuo :public sleep, public tuo
{
	
};
void test01()
{
	sleeptuo qq;
	qq.sleep::m_age = 222;
	qq.tuo::m_age = 111;
	cout << "羊的年龄为" << qq.sleep::m_age << endl;
	cout << "tuo的年龄为" << qq.tuo::m_age << endl;
	cout << "羊，tuo的年龄为" << qq.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}