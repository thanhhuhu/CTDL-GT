#include<bits/stdc++.h>
using namespace std;
int main ()
{
 map<int, int> mp;
 int n ; cin >> n;
 for ( int i =0; i < n; i++ ){
 	int x; cin >> x;
 	mp[x] =1;//OlogN
 	//{(1,1),(3,1),(2,1),(4,1),}
 }
 cout << mp.size()<<endl;
 // dem xem trong mang co bao nhieu phan tu rieng biet
 //input
 //6 
 //1 3 1 2 2 4
 //output
 //4
 return 0;
}


