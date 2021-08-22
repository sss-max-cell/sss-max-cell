#include<iostream>
using namespace std;
//立方体类的设计
// 创建立方体类
//设计属性
//设计行为,获取立方体的面积与体积
//分别利用全局函数与成员函数 判断两个立方体是否相等
class Cube
{
public:
	//设置长
	void setl(int l)
	{
		c_l = l;
	}
	//获取长
	int getl()
	{
		return c_l;
	}
	//设置宽
	void setw(int w)
	{
		c_w = w;
	}
	//获取宽
	int getw()
	{
		return c_w;
	}
	//设置高
	void seth(int h)
	{
		c_h = h;
	}
	//获取高
	int geth()
	{
		return c_h;
	}
	//获取立方体面积
	int mianji()
	{
		return 2 * c_l * c_w + 2 * c_l * c_h + 2 * c_h * c_w;
	}
	//获取立方体体积
	int tiji()
	{
		return c_l * c_w * c_h;
	}
	bool isSame2(Cube& c)//初始化的实例对象与你传入的实例对象进行判断
	{
		if ((c_l == c.getl()) && (c_w == c.getw()) && (c_h == c.geth()))
		{
			return true;
		}
		return false;
	}
private:
	int c_l;//长
	int c_w;//宽
	int c_h;//高

};
//利用全局函数来判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if ((c1.geth() == c2.geth()) && (c1.getl() == c2.getl()) && (c1.getw() == c2.getw()))
	{
		return true;
	}
	return false;
}

int main()
{
	Cube c1;
	c1.setl(10);
	c1.seth(10);
	c1.setw(10);
	cout << "c1的面积为：" << c1.mianji() << endl;
	cout << "c1的体积为：" << c1.tiji() << endl;
	//创建第二个立方体
	Cube c2;
	c2.setl(10);
	c2.seth(10);
	c2.setw(10);
	//利用全局函数进行判断
	int ret = isSame(c1, c2);
	if (ret)//如果相等的话 返回1，否则返回0
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	ret = c1.isSame2(c2);//c1已经把数据穿进去啦。相当于调用c1 传参c2进行比较
	if (ret)//如果相等的话 返回1，否则返回0
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}
