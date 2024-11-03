#include<bits/stdc++.h>
using namespace std;
//bool prime ( int num){
//	if ( num <= 1 ) return false;
//	if ( num == 2) return true;
//	if ( num % 2 == 0){
//		for ( int i = 2; i <= sqrt(num); i++ ){
//			return false;
//		}
//	}
//	return true;
//}
//function tim uoc chung lon nhat 
int gcd ( int a, int b) {
	while(b){
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}
int main ()
{
	int n; cin >> n;
	int a[n];
	
	for ( int i =0; i < n; i++ ) {
		cin >> a[i];

	}
	int count = 0;
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = i + 1; j < n; j++){
			if (gcd(a[i],a[j])==1 ){
				count++;
				cout <<a[i]<<" "<<a[j]<<endl;
			}
		}
	}
	cout <<count;
 return 0;
}
//Cho mot day so nguyen duong co n phan tu. Hay dem cac cap so nguyen to cung
//nhau trong mang
// Cac cap so nguyen to nay co uoc chung la 1 
//Sample Input 0
//5
//2 4 8 3 6
//Sample Output 0
//3

