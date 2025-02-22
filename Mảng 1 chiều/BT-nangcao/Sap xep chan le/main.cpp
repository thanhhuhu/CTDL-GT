#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n, bool descending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((descending && arr[j] < arr[j + 1]) || (!descending && arr[j] > arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int odd[1000000], even[1000000];
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            even[evenCount++] = x;
        } else {
            odd[oddCount++] = x;
        }
    }

    bubbleSort(odd, oddCount, true);  // Sắp xếp giảm dần
    bubbleSort(even, evenCount, false);  // Sắp xếp tăng dần

    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }

    return 0;
}
