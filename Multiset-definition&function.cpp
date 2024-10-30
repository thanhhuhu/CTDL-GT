#include<bits/stdc++.h>
using namespace std;
int main ()
{

 int a[7] ={5,5,1,1,2,2,2};
 multiset<int> se(a,a+7);
 for (  int x : se ) cout << x <<" ";
//xoa bang gia tri 
// xoa bang gia tri se xoa het tat ca cac phan tu can xoa trong mang
// cout << endl;
// se.erase(2);
// for ( int x : se) cout << x <<" ";

//xoa bang iterator 
//xoa bang iterator se xoa duoc phan tu can thiet
cout << endl;
auto it = se.find(2);
se.erase(it);
for ( int x : se) cout << x <<" ";
  return 0;
}


