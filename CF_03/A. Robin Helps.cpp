#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    int ans=0;
    int has=0;

    for(int i=0;i<n;i++)
        cin >> v[i];
    for(int i=0;i<n;i++){
        if(v[i]>=k)
            has+=v[i];
        else if(v[i]==0 && has>0){
            ans++;
            has--;
        }
    }
    cout << ans << endl;

}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}