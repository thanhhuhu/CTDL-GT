#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	int k ;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for ( int i =0; i <n; i++)
	{
	    for ( int j = i + 1; j < n; j++)
	    {
	        if (a[i] + a[j] == k )
	        {
	            count++;
	        }
	    }
	}
	cout << count;
}
