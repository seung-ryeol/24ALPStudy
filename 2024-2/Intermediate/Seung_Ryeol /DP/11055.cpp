#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    typedef long long ll;
    ll n;
    ll a[1005] = { 0 };
    ll D[1005] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        D[i] = a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (a[j] < a[i]) {
                D[i] = max(D[i], D[j] + a[i]);
            }
        }
    }
    cout << *max_element(D, D + n);
}
