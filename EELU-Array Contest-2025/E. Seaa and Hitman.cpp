#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << -1;
}
