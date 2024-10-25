#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >> n;
 int a[n];
 for ( int i =0; i< n; i++) cin >> a[i];
	sort (a, a+n);// sap xep lai mang
 int min_value = 1e9;
 for ( int i =0; i < n;i++)
 {
 	min_value = min(min_value, abs(a[i] - a[i-1]));// so sanh gia tri lien ke 
 }
 cout << min_value;
 return 0;
}


