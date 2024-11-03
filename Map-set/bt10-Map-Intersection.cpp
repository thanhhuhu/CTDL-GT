#include<bits/stdc++.h>
using namespace std;
int main ()
{
 	int n, m; cin >> n >> m;
 	int a[n], b[m] ;
 	set<int> y;
 	for ( int i =0 ; i < n; i++ )
 	{
 		cin >> a[i];
	}
	for ( int i =0; i < m; i++)
	{
		cin >> b[i];
		y.insert(b[i]);
	}
	//y = {1,2,3,4,5}
	//y.count(1) => 1;
	//y.count(2) => 1;
	// dung ham count de dem, neu co thi se co so day trong mang y (tuong tu nhu find )
 	for ( int i = 0 ; i < n; i++ )
 	{
 		if (y.count(a[i]))
 		{
 			cout << a[i]<<" ";
 			y.erase(a[i]);
		}
	} 
 return 0;
}
//Sample Input 0
//9 6
//7 9 2 0 0 5 6 4 7
//9 7 3 4 5 7
//Sample Output 0
//5 9 7 4

