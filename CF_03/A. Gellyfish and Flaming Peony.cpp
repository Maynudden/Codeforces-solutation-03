#include<bits/stdc++.h>
using namespace std;
#define ll int

void solve(){
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    vector<ll> mi(5001,INT_MAX);
    queue<ll> q;
    for(int i=0;i<n;i++){
        mi[v[i]]= 0;
        q.push(v[i]);
    }
    ll g=0;
    for(int i=0;i<n;i++)
        g=__gcd(g,v[i]);
    ll cnt = 0;
    for(int i=0;i<n;i++){
        if(v[i] == g)
            cnt++;
    }
    if(cnt>0){
        cout << n-cnt << endl;
        return;
    }
    while(q.size()){
        ll val = q.front();
        q.pop();
        for(auto it : v){
            ll gc = __gcd(it,val);
            if(mi[gc]  == INT_MAX){
                mi[gc] = 1+mi[val];
                q.push(gc);
            }
        }
    }
    cout << n+mi[g] -1 << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
} 
