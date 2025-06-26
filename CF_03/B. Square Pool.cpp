#include <iostream>
using namespace std;

bool isValid(int l1, int l2, int d1, int d2, int s){
    if (l1 == l2)
        return (abs(d1 - d2) % s == 0);
    else
        return ((d1 + d2) % s == 0);
}

void solve() {
    int n, s;
    cin >> n >> s;

    int cnt = 0;
    while (n--) {
        int l1, l2, d1, d2;
        cin >> l1 >> l2 >> d1 >> d2;

        if (isValid(l1, l2, d1, d2, s))
            cnt++;
    }

    cout << cnt << endl;
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
