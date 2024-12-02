#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int to = 0, ne = 0;;
    for (int i = 0; i < n; i++, to++) {
        if (arr[i] >= 0) break;
        ne++;
    }
    int i = 0;
    reverse(arr, arr + to);
    if (ne % 2) i++;
    int cnt = 0;
    long long f = 1;
    for (; i < n; i++) {
        if (arr[i] != 0) {
            f *= arr[i];
            cnt++;
        }
    }
    if (cnt == 0) cout << 0;
    else cout << f;
}
