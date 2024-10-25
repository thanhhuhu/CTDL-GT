#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >> n;
 int a[n];
 for ( int i =0; i< n; i++) cin >> a[i];
	for ( int i = 0; i < n;i++)
	{
		if ( a[i] >= 0) // khi khac -1 thi se in ra so day 
		{
			cout <<a[i]<<" ";
			for ( int j = i+1; j < n; j++)
			{
				if(a[j] == a[i])
				{
					a[j] = -1;//neu so da duoc lap lai thi se gan vao -1
				}
			}
		}
	 } 
 return 0;
}


