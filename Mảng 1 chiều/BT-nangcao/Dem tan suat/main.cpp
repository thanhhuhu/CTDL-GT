#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000] = {0}; // Mảng tần suất, giả sử giá trị trong mảng <= 1000

    for ( int i =0 ; i < n;i++ ) {
        int value;
        cin >> value;
        a[value]++;  // Tăng số lần xuất hiện của giá trị
    }
    for ( int i =0; i < n; i++ ) {
        if ( a[i] > 0) {
            cout << i << " " << a[i] << endl;

        }
    }

    return 0;
}
