#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll m;
ll a[10005];
ll D[10005];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        fill(D, D + 10005, 0);
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> m;
        D[0] = 1;
        for (int i = 0; i < n; i++)
            for (int j = a[i]; j <= m; j++){
                D[j] += D[j - a[i]]; 
            }
        cout << D[m] << '\n';
    }
}
