#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (auto &i: arr) cin >> i;
    sort(arr, arr + n);
    int cur = -1;
    for (int i = 0; i < n; i++) {
        int pre = (i != 0) ? arr[i - 1] : -1;
        int next = (i < n - 1) ? arr[i + 1] : -1;
        if (arr[i] != pre && arr[i] != next) cout << arr[i] << " ";
    }
}
