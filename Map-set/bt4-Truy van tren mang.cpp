//Sample Input 0
//6
//1 2 3 4 5 6
//4
//1 1
//2 6
//3 1
//3 6
//Sample Output 0
//YES
//NO
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n];
    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }

    int q; 
    cin >> q; 

    while (q--) {
        int tt; 
        cin >> tt; 

        if (tt == 1) {
            for (int i = 0; i < n; i++) {
                s.insert(a[i]);
            }
        } else if (tt == 2) {
            int f;
            cin >> f; 
            auto it = s.find(f); 
            if (it != s.end()) { 
                s.erase(it); 
            }
        } else if (tt == 3) {
            int f; 
            cin >> f; 
            auto it = s.find(f); 
            if (it == s.end()) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl; 
            }
        }
    }

    return 0;
}

