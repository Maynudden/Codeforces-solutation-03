#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2!=0)
                cnt++;
        }
        if(cnt%2==0)
            cout<<"YES" << endl;
        else 
            cout<<"NO" << endl;
    }
}