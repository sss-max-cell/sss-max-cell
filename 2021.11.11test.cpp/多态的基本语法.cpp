#include<iostream>
using namespace std;
class anmial
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class cat :public anmial
{
public:
	void speak()
	{
		cout << "小猫正在说话" << endl;
	}
};
class dog :public anmial
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//多态
//由于如果不运用多态技术的话，您想输出猫在说话，但是打印出的是动物在说话，
//因为他是在编译阶段就进行了，指定地址，这样的话太早啦，因此需要将它的往后移！
//加上visteral 他就变成了多态
//多态使用的条件
//1.必须有继承
//2.子类重写父类中的虚函数
//多态的使用
//父类中的指针或引用，可以指向子类中的对象
void dospeak(anmial& aa)//anmial &aa=cat/dog
{
	aa.speak();
}
void test()
{
	cat qq;
	dospeak(qq);
	dog aa;
	dospeak(aa);
}
int main()
{
	test();
	system("pause");
	return 0;
}