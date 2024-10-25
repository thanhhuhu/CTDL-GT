#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n; cin >> n;
 int a[n];
 int d[10001] = {0};
 for ( int &x : a) 
 {
 	cin >>x;
 	d[x]++;
 }
 //1 2 3 3 3 3 
 //1 1 
 //2 1
 //3 4
// d[1]= 1
// d[2]= 1
// d[3]= 4
 for ( int i =0; i < n; i++)
 {
 	if (d[a[i]]>0){
 		cout <<a[i]<<" "<<d[a[i]]<<endl;
 		d[a[i]]=0;
	 }
 }
 return 0;
}


