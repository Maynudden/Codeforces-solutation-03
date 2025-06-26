#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

ll fun_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    ll x1, y1;
    ll d = fun_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

ll matrix_fun(ll a) {
    ll x, y;
    fun_gcd(a, MOD, x, y);
    return (x % MOD + MOD) % MOD;
}

ll remov(ll n, ll r) {
    if (r < 0 || r > n) 
        return 0;
    ll res = 1;
    for (ll i = 1; i <= r; ++i) {
        res = (res * (n - i + 1)) % MOD;
        res = (res * matrix_fun(i)) % MOD;
    }
    return res;
}

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;

    ll n = (a - 1) * k + 1;
    ll c = remov(n, a);
    ll m = ((b - 1) * k) % MOD;
    ll result = (m * c + 1) % MOD;

    cout << (n % MOD) << " " << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
