#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;
    if (n >= m) {
        if (d == 0) cout << "YES";
        else cout << "NO";
    } else cout << "YES";
}