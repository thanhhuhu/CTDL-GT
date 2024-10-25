#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int n; cin >> n ;
 int a[n];
 for ( int i =0; i < n;i++)
 {
 	cin >>a[i];
 }
 int min_value = 1e9;
 for ( int i =0; i <n; i++)
 {
 	for ( int j = i+1; j < n; j++)
 	{
 		int distance = abs(a[i]-a[j]);
 		min_value = min(min_value, distance);
	}
 }
 cout <<min_value;
 return 0;
}


