#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout <<"ÄæÖÃÇ°£º"<< arr[i] << endl;
	}
	while(start < end)
	{
		int tep = arr[start];
		arr[start] = arr[end];
		arr[end] = tep;
		start++;
		end--;
	}
	for (i = 0; i < 5; i++)
	{
		cout << "ÄæÖÃºó£º"<<arr[i] << endl;
	}
}