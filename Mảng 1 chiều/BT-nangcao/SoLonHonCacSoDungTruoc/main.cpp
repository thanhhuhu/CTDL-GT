#include <iostream>
using namespace std;

void check(int a[], int n) {
    int max_value = a[0];
    cout << max_value << " ";

    for (int i = 1; i < n; i++) {
        if (a[i] > max_value) {
            cout << a[i] << " ";
            max_value = a[i];
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    check(a, n);

    return 0;
}
