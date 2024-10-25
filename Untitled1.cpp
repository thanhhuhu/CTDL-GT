//
// Created by LEGION on 10/23/2024.
//
#include<bits/stdc++.h>
using namespace std;
int prime( int n ) {
    for ( int i =2; i <= sqrt(n); i++) {
        if ( n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}
int main () {
    int n; cin >> n;
    int a[n];
    int sum = 0;
    int count = 0;
    for ( int &x : a)  cin >> x;
    for ( int x : a ) {
        if ( prime(x)) {
            sum += x;
            count++;
        }
    }
    cout << fixed<<setprecision(3)<<(double) sum/count;
    return 0;
}
