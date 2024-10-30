#include<bits/stdc++.h>
using namespace std;
long long F[100];
void fibonacci()
{
	F[0] =0;
	F[1] =1;
	for ( int i =2 ; i < 93; i++)// bat dau tu 2 
	{
		F[i]=F[i-1]+F[i-2];
	}
}
int tim (long long x)
{
	for ( int i=0; i < 93; i++)
	{
		if(F[i] == x)
		return 1;
	}
	return 0; 
}
int main ()
{
 fibonacci();	
 int n; cin >> n;
 long long a[n];
 for ( long long &x: a) cin >> x;// nhap mang
 int ok = 0;
 for ( long long x: a)
	if (tim(x))// kiem tra
	{
		cout <<x <<" ";
		ok = 1;// tim thay it nhat 1 so fibo
	}
	if (!ok) cout <<"NONE";
 return 0;
}


