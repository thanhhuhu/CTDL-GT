#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
    if (n <= 1) return 0; // Các s? <= 1 không ph?i s? nguyên t?
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    
    int a[1000]; // S? d?ng m?ng tinh v?i kích thu?c c? d?nh (gi? s? n <= 1000)
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (prime(a[i])) { // S? d?ng a[i] thay vì x
            sum += a[i];
            count++;
        }
    }
    
    if (count > 0) {
        cout << fixed << setprecision(3) << (double) sum / count << endl;
    } else {
        cout << "Khong co so nguyen to nao." << endl;
    }

    return 0;
}

