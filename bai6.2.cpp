#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main ()
{
	int n; cin >> n;
	int k;
	int d[1001] ={0};
	int a[n];
	for (int &x:a)
	{
		cin >> x;
		d[x]++;
	}
	int count = 0;
	for(int x =0; x <= k/2; x++)
	{
		int y = k-x;
		if (x !=y)
		{
			count +=d[x]*d[y];
		}
		else
		{
			count +=d[x]*(d[x]-1)/2;
		}
	}
	cout <<count;
	
}


