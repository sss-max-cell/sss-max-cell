#include<iostream>
using namespace std;
#include<string>
//1纯虚析构函数需要对于，父类指针释放子类对象的
//2如果子类中没有堆区上的数据，不用写它
//3有了虚构和纯虚析构的话，他也不能实例化对象
class animal
{
public:
	animal()
	{
		cout << "animal构造函数的应用" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;
	//虚析构
	//利用虚析构，可以解决父类指针释放子类对像时，释放不干净的问题
	/*virtual~animal()
	{
		cout << "animal析构函数的应用" << endl;
	}*/
	//纯虚构
	//有了纯虚构后，这个类也属于虚构类，无法实例化对象
	virtual ~animal()=0;
};
//对于纯虚构，也必须有实现，因为它可能父类中也有数据开辟到堆区的
animal::~animal()
{
	cout << "animal纯虚析构函数的应用" << endl;
}
class cat :public animal
{
public:
	cat(string name)
	{
		m_name = new string(name);
		cout << "cat构造函数的调用" << endl;
	}
	virtual void speak()
	{
		cout << *m_name << "小猫在说话" << endl;
	}
	~cat()
	{
		cout << "cat析构函数的调用" << endl;
		delete m_name;
		m_name = NULL;
	}
	string* m_name;//本文构建的各种函数，都是因为你
};
void test()
{
	animal* uu = new cat("tom");
	uu->speak();
	delete uu;
	//父类指针时
	//由于这样不能调用cat的析构函数，无法对开的m_name进行释放，会造成释放不干净
}
int main()
{
	test();
	system("pause");
	return 0;
}