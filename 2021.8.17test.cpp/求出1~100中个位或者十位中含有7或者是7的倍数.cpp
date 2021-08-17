#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 7 == 0) || (i / 10 == 7) || (i % 10 == 7))
		{
			cout << "ÇÃ×À×Ó"<< endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}