#include <bits/stdc++.h>
using namespace std;

int arr[500005];
int N, M;

int binarysearch(int x, int len) {
    int st = 0;
    int ed = len;
    while (st < ed) {
        int mid = (st + ed) / 2;
        if (arr[mid] > x) {
            ed = mid;
        }
        else {
            st = mid + 1;
        }
    }
    return st;
}
int binarysearch2(int x, int len) {
    int st = 0;
    int ed = len;
    while (st < ed) {
        int mid = (st + ed) / 2;
        if (arr[mid] >= x) {
            ed = mid;
        }
        else {
            st = mid + 1;
        }
    }
    return st;
}


int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    cin >> M;
    while (M--) {
        int t;
        cin >> t;
        cout << binarysearch(t,N) - binarysearch2(t, N) << " ";
    }


    return 0;
}
