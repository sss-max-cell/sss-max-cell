//1计算π的值
//#include<iostream>
//using namespace std;
//#include<iomanip>
//#include<cmath>
//int main()
//{//pai/4=1-1/3+1/5-1/7+.....这样计算π的
//	double pai = 0;
//	double t = 1;
//	int i = 1;
//	double s = 1;
//	while (fabs(t / i )> 1e-7)//表示1*10-7
//	{//必须用fabs函数进行限制最后一项的绝对值是正
//		pai = pai + s;
//		t = -t;
//		i = i + 2;
//		s = t / i;
//	}
//	pai = 4 * pai;
//	cout << "pai= " << setiosflags(ios::fixed) << setprecision(6) << pai << endl;
//}


//02求斐波那契说列,打印出前40个
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int i = 0;
//	long f1, f2;
//	f1 = 1;
//	f2 = 1;
//	for (i = 1; i<=20;i++ )
//	{
//		cout << setw(12) << setiosflags(ios::left) << f1 << setw(12) << setiosflags(ios::left) << f2;
//		if (i % 2 == 0)
//			cout << endl;
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//}

//03求出100~200间的素数
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int k=0, i=0,v=0;
//	bool panduan;
//	for (i = 101; i <= 200; i=i+2)
//	{
//		panduan = true;
//		k = int(sqrt(i));
//		for (int n = 2; n <=k; n++)
//		{
//			if (i % n == 0)
//			{
//				panduan = false;
//				break;//只要有一个能被除书名他就是假，可以直接跳走
//			}
//		}
//		if (panduan)
//		{
//			cout << setw(5) << i;
//			v = v + 1;
//		}
//		if (v % 10 == 0)
//			cout << endl;
//	}
//	cout << endl;//最后执行一次换行
//	return 0;
//}

//04破译密码，字母围成一个圈，每个字母加4！，到底的时候。从A开始
//#include<iostream>
//using namespace std;
//int main()//
//{
//	cout << "请输入字母进行转化" << endl;
//	char c;
//	while ((c = getchar()) != '\n')
//	{
//		if (((c >= 'A') && (c <= 'V')) || ((c >= 'a') && (c <= 'v')))
//			c = c + 4;
//		else if (c >= 'W' && c <= 'Z')
//			c = c - 22;
//		else if (c >= 'w' && c <= 'z')
//			c = c - 22;
//		cout << c;
//	}
//	cout << endl;
//	return 0;
//}

//05求4个数中的最大值
//#include<iostream>
//using namespace std;
//int max(int z, int x)
//{
//	return(z> x)?z:x;
//}
//int main()
//{
//	int a, b, c, d;
//	cout << "请输入四个数据" << endl;
//	cin >> a >> b >> c >> d;
//	int max(int z, int x);
//	int MAx = max(a, b);
//	 MAx = max(c, MAx);
//	 MAx = max(d, MAx);
//	cout << "max= " << MAx;
//	return 0;
//}


