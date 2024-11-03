#include<bits/stdc++.h>
using namespace std;
int main ()
{
//find kiem tra su ton tai cua phan tu trong mang
//O(logN) N la so phan tu trong mang
// neu tim thay thi se tra ve phan tu iteraton trong set
int n; cin >> n;
int a[n];
for ( int i =0; i < n; i++) cin >> a[i];
set<int> se;
for ( int x : a) 
{
	se.insert(x); //O(logN)
}
//auto it = se.find(7);
//if ( it != se.end()){
//	cout <<"Yes\n";
//}else {
//	cout <<"No\n";
//}

// ham tinh so luong phan tu do trong mang
if ( se.count(10) == 0)
{
	cout <<"No\n";
}else 
{
	cout <<"Yes\n";
}


 return 0;
}


