#include <bits/stdc++.h>
using namespace std;
int main() {
    typedef long long ll;
    ll D[11] = { 0 };
    D[1] = 1;
    D[2] = 2;
    D[3] = 4;
    for (int i = 4; i < 11; i++) {
        D[i] = D[i - 3] + D[i - 2] + D[i - 1];
   }
    int N;
    cin >> N;
    while (N--) {
        int t;
        cin >> t;
        cout << D[t]<<"\n";
    }
    
    return 0;
}
