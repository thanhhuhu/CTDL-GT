#include <iostream>
#include <cmath>
using namespace std;

bool prime(int num ) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n = 0;
    int a[1000];  // Mảng lưu số đầu vào
    int count[100000] = {0};  // Mảng tần suất với kích thước đủ lớn

    // Đọc dãy số từ input
    while (cin >> a[n]) {
        count[a[n]]++;  // Tăng tần suất của số này
        n++;
    }

    // In các số nguyên tố cùng tần suất
    for (int i = 0; i < n; i++) {
        if (prime(a[i]) && count[a[i]] > 0) {
            cout << a[i] << " " << freq[a[i]] << endl;
            count[a[i]] = 0;
        }
    }

    return 0;
}