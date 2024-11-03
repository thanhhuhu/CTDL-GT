#include<bits/stdc++.h>
using namespace std;

int main ()
{
// //insert 
// int a[] ={3,1,2,2,1,4};
// set<int> se;
// for ( int x : a){
//	se.insert(x);
// }
//cout <<se.size()<<endl; //4 phan tu 

//giai quyet duoc nhung bai tap dem so luong phan tu khac nhau 
//vi trong set size chi dem so luong phan tu khac nhau  
// insert co do phuc tap la log(N)
//O(NlogN)
//O(N)
int n; cin >> n;
int a[n];
for ( int i =0 ; i < n; i++)
{
	cin >> a[i];
}
set<int> se;
for ( int x : a) se.insert(x);
cout << se.size()<<endl;
for ( int x : a)
cout << x <<' ';
cout << endl;

// duyet set bang vector
// tuong tu nhu duyet range base for loop 
for ( set<int>::iterator it = se.begin(); it != se.end();++it)
{
	cout <<*it<<' ';
}
cout << endl;
//duyet mang tu phai qua trai  // phai cong cong khong phai tru tru  // iterator theo thu tu nguoc 
for ( auto it = se.rbegin(); it != se.rend();++it)
{
	cout <<*it<<' ';
}
cout << endl;
cout << *se.begin()<<endl; // in phan tu nho nhat cua mang
cout << *se.rbegin()<<endl; // in phan tu lon nhat cua mang
 return 0;
 //5 
 //1 2 3 4 5 
}


