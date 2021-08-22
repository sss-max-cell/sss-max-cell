#include"yuan.h"

	void yuan::setr(int r)
	{
		y_r = r;
	}
	//输出半径
	int yuan::getr()
	{
		return y_r;
	}
	//设置圆心
	void yuan::setcenter(point center)
	{
		y_center = center;
	}
	//输出圆心
	point yuan::getcenter()
	{
		return y_center;
	}
