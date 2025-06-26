#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) 
            cin >> x;

        sort(a.begin(), a.end());

        ll ans = 0;
        for (int i = 2; i < n; i++) {
            ll q = max(2LL * a[i], (ll)a[n - 1]);
            if (i == n - 1) 
                q = max(q, (ll)a[n - 2]);

            ll t = q - a[i];

            int left = 0, right = i - 1;
            while (left < right) {
                if ((ll)a[left] + a[right] > t) {
                    ans += (right - left);
                    right--;
                } else {
                    left++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
