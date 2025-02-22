#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<int, int> a_map, b_map, intersection_map, union_map;

    // Đọc mảng a và lưu vào map a_map
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a_map[x] = 1;  // Gán giá trị bất kỳ (ở đây là 1) để đánh dấu sự xuất hiện của phần tử
    }

    // Đọc mảng b và lưu vào map b_map
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b_map[x] = 1;  // Tương tự, đánh dấu sự xuất hiện của phần tử
    }

    // Tìm giao: phần tử chung giữa a_map và b_map
    for (auto& entry : a_map) {
        if (b_map.find(entry.first) != b_map.end()) {
            intersection_map[entry.first] = 1;  // Nếu phần tử xuất hiện trong cả 2 map, thêm vào intersection
        }
    }

    // Tìm hợp: tất cả phần tử trong a_map và b_map
    union_map = a_map;  // Sao chép tất cả phần tử từ a_map vào union_map
    union_map.insert(b_map.begin(), b_map.end());  // Thêm tất cả phần tử của b_map vào union_map

    // In giao
    for (auto& entry : intersection_map) {
        cout << entry.first << " ";
    }
    cout << endl;

    // In hợp
    for (auto& entry : union_map) {
        cout << entry.first << " ";
    }
    cout << endl;

    return 0;
}
