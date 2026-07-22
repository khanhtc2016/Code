#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    long long a[100005];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        long long need = x - a[i];

        // tìm trong đoạn (i+1 -> n-1)
        int l = lower_bound(a + i + 1, a + n, need) - a;
        int r = upper_bound(a + i + 1, a + n, need) - a;

        ans += (r - l);
    }

    cout << ans;
    return 0;
}