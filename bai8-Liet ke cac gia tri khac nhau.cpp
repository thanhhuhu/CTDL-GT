#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >> n;
 int a[n];
 for ( int i =0; i< n; i++) cin >> a[i];

 int check = 0;
 for ( int i =0; i <n ; i++)
 {
 	for ( int j = 0; j < n;j++)
 	{
 		if (a[j] ==a[i])
 		{
 			check = 1;
		}
	 }
	 if(!check) 
	 {
	 	cout <<a[i] << " ";
	 }
 }
 return 0;
}


