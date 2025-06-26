#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
#define mp make_pair

ll po[100003];

void solve() {
    ll n;
    cin >> n;
    vector<ll> p(n), q(n),r(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> q[i];
    ll pmx=0,qmx=0,pmx_idx=0,qmx_idx=0;
    for (int i = 0; i < n; i++) {
        pmx = max(pmx, p[i]);
        qmx = max(qmx, q[i]);

        if(pmx == p[i])
            pmx_idx =i;
        if(qmx == q[i])
            qmx_idx = i;
        if(p[pmx_idx]>q[qmx_idx])
            r[i]=po[p[pmx_idx]]+po[q[i-pmx_idx]];
        else if(p[pmx_idx]<q[qmx_idx])
            r[i]=po[q[qmx_idx]]+po[p[i-qmx_idx]];
        else{
            if(p[i-qmx_idx]>q[i-pmx_idx])
                r[i]=po[p[i-qmx_idx]]+po[q[qmx_idx]];
            else
                r[i]=po[q[i-pmx_idx]]+po[p[pmx_idx]];
        }
        
    }

    for (ll i = 0; i < n; i++)
        cout << r[i]%MOD << ' ';
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    po[0] = 1;
    for (int i = 1; i <= 100000; i++)
        po[i] = (po[i-1]+po[i-1]) % MOD;

    while (T--) {
        solve();
    }

    return 0;
}
