#include <iostream>
#include <cmath>
using namespace  std;
// bool prime (int num) {
//     if ( num <=1 ) {
//         return false;
//     }
//     else if ( num == 2) return false;
//     else if ( num % 2 == 0) {
//         for ( i % 2 ==0; i <= sqrt(num); i++) {
//                 return false;
//         }
//     }
//     return true;
// }
int gcd (int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i =0; i< n;i++) {
        cin >> a[i];
    }
    int count = 0;
    for ( int i =0 ; i < n; i++) {
        for ( int j = i +1 ; j < n; j++) {
            if ( gcd(a[i],a[j]) ==1) {
                cout << a[i]<<" "<<a[j]<<" "<<endl;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
