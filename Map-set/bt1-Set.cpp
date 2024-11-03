#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >> n;
 int a[n];
 for ( int i =0; i< n; i++) cin >> a[i];
 set <int> se;
for ( int x : a) se.insert(x);
int q; cin >> q;
while (q--)
{
	int x; cin >> x;
	if ( se.find(x) != se.end()){
	cout <<"Yes\n";
	}else {
	cout <<"No\n";
	}
}
 return 0;
}


