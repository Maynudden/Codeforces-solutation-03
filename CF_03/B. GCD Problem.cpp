#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n;
        if((n%2) == 0)
            cout << n-3 << " " << 2 << " " << 1 << endl;
        else{
            m=n-1;
            if((m/2)%2 == 0){
                cout << (m/2 - 1) << " " << (m/2 +1) << " " << 1 << endl;
            }else{
                cout << (m/2 - 2) << " " << (m/2 + 2) << " " << 1 << endl;
            }
        }
    }
    return 0;
}