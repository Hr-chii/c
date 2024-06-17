#include <iostream>

using namespace std;

bool binarySearch(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) return true;
        else if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    int k[100000];
    for (int i = 0; i < m; ++i) cin >> k[i];
    for (int i = 0; i < m; ++i) {
        if (binarySearch(a, n, k[i])) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}

