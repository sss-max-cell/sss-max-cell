//�Լ���д����ˮ�ɻ��ķ������Լ���д�ľ����˶�εĵ��ԡ�����
#include<iostream>
//ˮ�ɻ�����������ÿ��λ���ϵ�����3�η��ĺ͵������ı���
using namespace std;
int main()
{
	cout << "����������do whileѭ����ӡ�������е���λ����ˮ�ɻ���" << endl;
	int i =153;
	do
	{
		int count = 0;
		int sum = 0;
		int zz = i;
		do
		{
			int a = 0;
			a = i % 10;
			sum =sum+ a * a * a;
			i=i / 10;
			count++;
			if (count == 3)
			{
				if (sum == zz)
				{
					cout << sum << endl;
				}
			}
			
		} while (i>0);
		i = zz;
		i++;
	} while (i<1000);
}