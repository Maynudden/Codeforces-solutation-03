#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,x,y;
        cin >> a >> x >> y;
        bool flag  = false;
        for(int i=-1000;i<=1000 && !flag;i++){
            if(i == a)
                continue;
            if(abs(i-x) < abs(a-x) && abs(i-y) < abs(a-y)){
                flag = true;
            }
        }
        if(!flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}