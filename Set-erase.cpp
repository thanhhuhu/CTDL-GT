#include <bits/stdc++.h>
using namespace std;
//erase : xoa phan tu trong mang
// neu xoa phan tu khong ton tai trong set thi se gay ra loi 
int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    
    set<int> s;
    for (int i = 0; i < n; i++) s.insert(a[i]);
    
    for (int x : a) cout << x << " ";
    cout << endl;
    s.erase(5);
    // dat dieu kien de neu khong co 5 thi se khong gay ra loi  
//    if (s.find(5) != s.end()) {
//        s.erase(5); logN 
//    }

    for (int x : s) cout << x << " ";
    cout << endl;

    return 0;
}

