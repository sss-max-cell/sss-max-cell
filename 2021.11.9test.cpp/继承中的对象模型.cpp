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
	cout << "sizeof son 所占的空间" <<sizeof(son)<< endl;
	//16
	//父类中的成员都属于子类中，（3+1）*4=16个字节
}
int main()
{
	test();
	system("pause");
	return 0;
}