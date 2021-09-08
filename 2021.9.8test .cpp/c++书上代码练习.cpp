////1.求三角形的面积
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double s, area,a, b, c;
	cout << "请输入三边的面积" << endl;
	cin >> a >> b >> c;
	if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << setiosflags(ios::fixed)<<setprecision(4);
		cout << "area= " << area << endl;
	}
	else
	{
		cout << "您输入的数据有误" << endl;
	}
	
}

////02大小写的转换，全转变为小写
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字母" << endl;
	cin >> ch;
	if ('A' <= ch && ch<= 'Z')
		ch = ch + 32;//ch=(ch>='A'&&ch<='z')?(ch+32):ch;
	cout << ch << endl;

}

////03编写程序输出闰年
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "请输入一个数" << endl;
	cin >> num;
	if (((num % 4 == 0) && (num % 100 != 0)) || ((num % 400 == 0)))
		cout << "这个是润年" << num << endl;
	else
		cout << "它不是闰年" << endl;
}

//04计算运费
#include<iostream>
using namespace std;
int main()
{
	double w,d, p,f;//其中f总运费，w为货物的重量，p为基本价格，s为距离
	int s, c;
	cout << "请输入重量w，路程s，基本运费p" << endl;
	cin >> w >> s >> p;
	if (s > 3000)
		d = 15;
	else
		c = s / 250;
	switch (c)
	{
	case 0:
		d = 0; break;
	case 1:
		d = 2; break;
	case 2:
	case 3:
		d = 5; break;
	case 4:
	case 5:
	case 6:
	case 7:
		d = 8; break;
	case 8:
	case 9:
	case 10:
	case 11:
		d = 10; break;
	case 12:
		d = 15; break;
	}
	f =p*w*s*(1-d/100) ;
	cout << "运费为：" << f << endl;
}