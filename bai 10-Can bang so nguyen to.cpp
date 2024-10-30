#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    bool found = false;
    for (int i = 1; i < n - 1; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; j++) sum_left += a[j];
        for (int j = i + 1; j < n; j++) sum_right += a[j];
        
        if (isPrime(sum_left) && isPrime(sum_right)) {
            cout << i << " ";
            found = true;
        }
    }
	

    return 0;
}


