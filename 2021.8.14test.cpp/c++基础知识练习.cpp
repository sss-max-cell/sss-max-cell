//01
#include<iostream>
using namespace std;//c++简单语言
int main()
{
	cout << "This is a cpp program.";
	return 0;
}
//02
#include<iostream>
#define day 7
#include<string>
using namespace std;
int main()
{
	cout << "一周有：" << day << "天" << endl;
	char arr[] = "hello word";//c语言的字符串，需要中括号，需要把字符的内容引起来。
	string arrq = "hello word";//用c++的方式，书写字符串。string 变量名=“字符串”
	cout << arr << endl;
	cout << arrq << endl;
	return 0;
}
//03
#include<iostream>
using namespace std;
int main()
{
	bool flag = true;//bool数据类型只占一个字节，只能打印出1或者0
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	flag = 11;//只有输入0，才打印0，其他的情况下都是打印1
	cout << flag << endl;
}
//04
#include<iostream>
using namespace std;
int main()
{
	//1，整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;//这样进行数据的输入
	cout << "整型变量a= " << a << endl;
	//2,浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值： " << endl;
	cin >> f;
	cout << "浮点型f的值是 " << f << endl;
	//3,字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值 " << endl;
	cin >> ch;
	cout << "浮点型变量ch的值是 " <<ch<< endl;
	//4,字符串型
	string arr = "abcdef";
	cout << "请给字符串arr赋值 " << endl;
	cin >> arr;
	cout << "字符串arr的值是 " <<arr<< endl;
	//5布尔型
	bool fase = false;
	cout << "请给布尔类型的fase进行赋值 " << endl;
	cin >> fase;//布尔类型除了0其他的随便输入都是真
	cout << "布尔类型的值是 " <<fase<< endl;
}
//05
#include<iostream>
using namespace std;
int main()
{
	cout << "本期任务：用do while输出0~9的数字" << endl;
	int count = 0;
	do
	{
		cout << count << endl;
		count++;
	} while (!(count == 10));//这里的判断条件，大神的是 count<10;
}
//06
#include<iostream>
using namespace std;
int main()
{
	int a = 233;
	cout << a / 10/10 % 10 << endl;
	cout << a / 100 << endl;
}

