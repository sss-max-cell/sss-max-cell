#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			cout << j<<"*"<<i<<"="<<i*j<<"\t";
		}
		cout << endl;
	}
}