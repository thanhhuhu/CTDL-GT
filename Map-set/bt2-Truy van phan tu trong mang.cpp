//phan tu x nay co nam trong mang ko 
// dong thu 2 gom N so nguyen a[i]
//dong thu 3 la so luong truy van q
//input
//5
//1 2 1 3 4
//2
//1
//6
//output
//YES
//NO
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >> n;
 int a[n];
 set<int> s;
 for ( int i =0; i < n; i++ ){
 	cin >> a[i];
 	s.insert(a[i]);
 } 
 int q; cin >> q;
 while (q--)
 {
 	int f; cin >> f;
 	auto it = s.find(f);
 	if (it == s.end()){
 		cout <<"NO"<<endl;
	 }else {
	 	cout <<"YES"<<endl;
	 }
 }
 return 0;
}


