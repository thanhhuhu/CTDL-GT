#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	int a[n];
	bool check = false;
	for ( int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for ( int i =0; i < n; i++)
	{
		if (i % 2 ==0 & a[i]%2 == 0)
		{
			check = true;
			cout <<a[i]<<" ";
	
		}
	}
	if ( check == false)
	{
		cout <<"None";
	}
 return 0;
}


