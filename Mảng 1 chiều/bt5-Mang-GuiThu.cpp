#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	int a[n];
	
	for ( int i =0; i < n; i++ ) {
		cin >> a[i];
	}
	cout <<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
	for ( int i =1; i < n-1 ;i++ ){
		int mini =min(a[i] -a[i-1],a[i+1] -a[i]);
		int maxi =max(a[i]-a[0],a[n-1]-a[i]);
		cout <<mini<<" "<<maxi<<endl;
	}
	cout <<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
 return 0;
}
//Sample Input 0
//4
//-5 -2 2 7
//Sample Output 0
//3 12
//3 9
//4 7
//5 12

//[mang 1 chieu]. bai 5. gui thu
//tat ca cac thanh pho cua lineland deu nam tren truc toa do ox. do do, moi thanh
//pho duoc lien ket voi vi tri xi - toa do tren truc ox. khong co hai thanh pho duoc
//dat tai mot diem. cu dan lineland thich gui thu cho nhau. mot nguoi chi co the
//gui thu neu nguoi nhan song o mot thanh pho khac. chi phi gui thu chinh xac
//bang khoang cach giua thanh pho cua nguoi gui va thanh pho cua nguoi nhan.
//doi voi moi thanh pho, hay tinh hai gia tri mini va maxi, trong do mini la chi phi
//toi thieu de gui thu tu thanh pho thu i den mot thanh pho khac va maxi la chi phi
//toi da de gui thu tu thanh pho thu i den mot so thanh pho khac
//Output Format
//Ð?i v?i m?i thành ph? in ra 2 giá tr? mini và maxi trên 1 dòng


