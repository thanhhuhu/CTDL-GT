//bt 3 : Liet ke cac phan tu trong day lon hon tat ca cac so dung truoc no
// Phan tu dau tien  duoc coi  la mot phan tu thoa man
//Sample Input 0
//6
//2 6 1 3 9 9
//Sample Output 0
//2 6 9
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	int a[n];
	
	for ( int i =0; i < n; i++ ) {
		cin >> a[i];
	}
	int max_value = -1e9;
	for ( int i =0 ; i < n; i++ ){
		if (a[i] > max_value){
			cout <<a[i]<< " ";
			max_value = a[i];
			}
		}	
 return 0;
}


