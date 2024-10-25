#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >>n;
    int a[n];
    for ( int i =0; i < n; i++) {
        cin >>a[i];
    }
  int x;
    cin >> x;
    int d1 = 0;
    int d2 = 0;
    for ( int i =0; i < n; i++) {
        if (a[i] < x) {
            d1++;
        }else if(a[i] > x) {
            d2++;
        }
    }
    cout << d1 << endl <<d2 << endl;
}

