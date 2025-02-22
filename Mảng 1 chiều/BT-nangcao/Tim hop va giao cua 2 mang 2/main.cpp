#include <iostream>
#include <map>
using namespace std;

int main () {
    int n; cin >> n;
    int m; cin >> m;
    map<int,int> map_a, map_b, intersection_map, union_map;
    for ( int i =0 ; i < n; i++) {
        int x;
        cin >> x;
        map_a[x] =1;
    }
    for ( int i =0 ; i < m; i++) {
        int x;
        cin >> x;
        map_b[x] =1;
    }

    // Tìm giao phần tử chung giữa 2 map
    for (auto& entry : map_a) {
        if (map_b.find(entry.first) != map_b.end()) {
            intersection_map[entry.first] =1;
        }
    }
}