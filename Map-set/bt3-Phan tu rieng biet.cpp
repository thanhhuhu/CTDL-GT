//liet ke cac gia tri xuat hien, chi xuat hien 1 lan 
//Sample Input 
//8
//1 2 3 2 1 3 4 8
//Sample Output 
//1 2 3 4 8
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 	int n; cin >> n;
	int a[n];
	set<int> s;
	for ( int i =0; i < n; i++ ) {
		cin >> a[i];
		s.insert(a[i]);
	}
	for (set<int> ::iterator it = s.begin(); it != s.end(); ++it)
	{
		cout <<*it<<' ';
	}
 	return 0;
}


