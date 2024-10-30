#include <bits/stdc++.h>
using namespace std;

void findMin(int a[], int n, int &min_position) {	
    int min_value = 1e9;
    min_position = -1;
    for (int i = 0; i < n; i++) { 
        if (a[i] < min_value) {
            min_value = a[i];
            min_position = i;
        } else if (a[i] == min_value) {
            min_position = i;
        }
    }
}

void findMax(int a[], int n, int &max_position) {
    int max_value = -1e9;
    max_position = -1;
    for (int i = 0; i < n; i++) {  
        if (a[i] > max_value) {
            max_value = a[i];
            max_position = i; 
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int min_position, max_position;
    findMin(a, n, min_position);
    findMax(a, n, max_position); 

    cout << min_position << " " << max_position << endl;
 
    return 0;
}

