#include <bits/stdc++.h>
using namespace std;
int main() {
    typedef long long ll;
    ll D[1005] = {};
    D[1] = 1;
    D[2] = 2;
    for (int i = 3; i < 1001; i++) {
        D[i] = (D[i - 2] + D[i - 1])%10007;
    }
    int t;
    cin >> t;
    cout << D[t];
    return 0;
}
