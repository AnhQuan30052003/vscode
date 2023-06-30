// San dien kinh - Tim kim nhi phan //
#include <iostream>
using namespace std;

int n, m;
int a[100000];

int TimNhiPhan(int l, int r, int x) {
    if (x < a[l] || x > a[r] || l > r) return -1;
    int m = (l+r)/2;
    if (x == a[m]) return m;
    if (x > a[m]) return TimNhiPhan(m+1, r, x);
    return TimNhiPhan(l, m-1, x);
}

void SanDienKinh() {
    for (int i = 0; i < n-1; i++) {
        int j = TimNhiPhan(i+1, n-1, a[i]+m);
        if (j != -1) {
            cout << a[i] << ' ' << a[j];
            return;
        }
    }
    cout << -1;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    SanDienKinh();
}