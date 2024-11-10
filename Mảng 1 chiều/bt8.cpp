#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin >> n;
    int m;cin >> m;
    int a[n]; int b[m];
    for ( int i =0 ; i < n; i++)  cin >>a[i];
    for ( int j =0; j < m; j++ ) cin >> b[j];
    int i =0, j =0;
    vector <int> giao, hop;
    while ( i < n && j < m )/*// điều kiện để 2 mảng duyệt hết vòng lặp*/
        {
        if ( a[i] == b[j] ) {
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            i++;
            j++;
            /*// tăng cả i và j để 2 mảng tiếp tục duyệt các phần tử tiếp theo của cả hai mảng*/
        }else if ( a[i] < b[j] ){
            hop.push_back(a[i]);/*// nếu phần tử hiện tại của a nhỏ hơn phần tử của b  thì phần tử a[i]  sẽ được thêm vào hợp*/
            i++;
        }else if ( a[i] > b[j] ) {
            hop.push_back(a[i]);
            j++;
        }
    }

    while ( i < n) {
        hop.push_back(a[i++]);
    }
    while ( j < m ) {
        hop.push_back(b[j++]);
    }
    for (  i = 0; i < hop.size(); i++ ) cout <<hop[i]<< " ";
    cout << endl;
    for ( j = 0; j < giao.size(); j++ ) cout <<giao[j]<<" ";
    return 0;
}
/*Sample Input 0
4 5
1 2 3 4
2 3 5 6 7
Sample Output 0
1 2 3 4 5 6 7
2 3*/