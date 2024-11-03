//phan tu rieng biet
//Dem xem trong mang co bao nhieu phan tu rieng biet 
 
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	int a[n];
	set<int> s;
	for ( int i =0; i < n; i++ ) cin >> a[i];
 	for ( int x : a ) s.insert(x);
	cout << s.size()<<endl; // vi set se tu dong sap xep thu tu va chi hien thi cac phan tu khong trung lap
	 
 return 0;
}


