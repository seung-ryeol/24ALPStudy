#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int st;
int en = -1;

int m, n;
int arr[1000005];

bool solve(int x) {
    if (x == 0) { 
        return true; 
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += arr[i] / x;
    }
    return cnt >= m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        if (arr[i] > en) {
            en = arr[i];
        }
    }

    while (st < en) {
        int mid = (st + en + 1) / 2;
        if (solve(mid))
            st = mid;
        else
            en = mid - 1;
    }
    cout << st << "\n";
}
