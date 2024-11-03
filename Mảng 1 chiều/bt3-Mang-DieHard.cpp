#include<bits/stdc++.h>
using namespace std;
int check ( int a[], int n )
{
	// kiem tra xem neu dua to 25 thi se tui se tang them 1 don vi
	// neu 50 thi tra lai 25 (25--)
	// neu 100 thi se co 2 truong hop 1) 1 to 25 + 1 to 50  2) 3 to 25;
	int d[101] ={0};
	for ( int i =0; i < n;i++)
	{
		if ( a[i] == 25)
		{
			d[25]++;
		}else if (a[i] == 50){
			if ( d[25] ==0) return 0;
			d[25]--;
			d[50]++;
		}else if ( a[i] == 100){
			if ( d[25] > 1 && d[50] >= 1){
				d[25]--;
				d[50]--;
				d[100]++;
			}
			else if ( d[25] >= 3){
				d[25] -= 3;
				d[100]++;
			}
			else return 0;
		}
	}
	return 1;
}
int main ()
{
	int n; cin >> n;
	int a[n];

	for ( int i =0; i < n; i++ ) {
		cin >> a[i];
	}
	if ( check (a,n)){
		cout <<"YES";// neu co du tien de thoi se xuat ra Yes 
	}else {
		cout <<"NO";
	}
 return 0;
}
//Sample Input 0
//5
//25 25 25 50 50
//Sample Output 0
//YES
//Sample Input 1
//2
//50 25Sample Output 1
//NO

