#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >>n;
 int a[n];
 map<int,int> mp;
 for ( int i = 0 ; i < n; i++ ) 
 {
 	cin >> a[i];
 }
 for ( int i = 0; i < n; i++ ) 
 {
 	mp [a[i]]++; // neu gap lai phan tu day thi se tang tan suat len 1 
 }
 for ( auto it : mp) {
 	cout << it.first << " " <<it.second<<endl;
 } 
 return 0;
//input
 //6 
 //1 3 1 2 2 4
 //output
 //4
}



