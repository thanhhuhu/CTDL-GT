#include<bits/stdc++.h>
using namespace std;
int main ()
{
 set<int> se;
 int n; cin >>n;
 for ( int i =0; i < n; i++ ) 
 {
 	int x;
 	cin >> x;
 	se.insert(x);
 }
int q; cin >> q; // so luong thao tac
while (--q){
	int tt; cin >> tt;
	if ( tt == 1){
		int x; cin >> x;
		se.insert(x);
	}else if ( tt == 2 ){
		int x; cin >> x;
		if (se.find(x) != se.end())
		{
			se.erase(x);
		}
	}else if ( tt == 3){
		cout << *se.begin () <<endl;
	}else if ( tt == 4 ){
		cout << *se.rbegin() <<endl;
	}
}
return 0;
}


