////1.�������ε����
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double s, area,a, b, c;
	cout << "���������ߵ����" << endl;
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
		cout << "���������������" << endl;
	}
	
}

////02��Сд��ת����ȫת��ΪСд
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "������һ����ĸ" << endl;
	cin >> ch;
	if ('A' <= ch && ch<= 'Z')
		ch = ch + 32;//ch=(ch>='A'&&ch<='z')?(ch+32):ch;
	cout << ch << endl;

}

////03��д�����������
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "������һ����" << endl;
	cin >> num;
	if (((num % 4 == 0) && (num % 100 != 0)) || ((num % 400 == 0)))
		cout << "���������" << num << endl;
	else
		cout << "����������" << endl;
}

//04�����˷�
#include<iostream>
using namespace std;
int main()
{
	double w,d, p,f;//����f���˷ѣ�wΪ�����������pΪ�����۸�sΪ����
	int s, c;
	cout << "����������w��·��s�������˷�p" << endl;
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
	cout << "�˷�Ϊ��" << f << endl;
}