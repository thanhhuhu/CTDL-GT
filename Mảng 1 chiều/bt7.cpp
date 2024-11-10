#include <bits/stdc++.h>
using namespace std;

int dA[100005];
int dB[100005];

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dA[a[i]]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        dB[b[i]]++;
    }

    vector<int> giao, hop;
    for (int val = 0; val <= 1e5; val++) {
        if (dA[val] > 0 && dB[val] > 0) {
            giao.push_back(val);  // Phần tử xuất hiện trong cả hai mảng
        }
        if (dA[val] > 0 || dB[val] > 0) {
            hop.push_back(val);  // Phần tử xuất hiện trong ít nhất một trong hai mảng
        }
    }

    for (int x : giao) cout << x << " ";
    cout << endl;
    for (int x : hop) cout << x << " ";

    return 0;
}
/*Sample Input 0
5 6
1 2 1 2 7
1 2 3 4 5 6
Sample Output 0
1 2
1 2 3 4 5 6 7*/