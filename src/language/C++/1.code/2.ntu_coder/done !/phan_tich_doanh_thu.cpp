#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long loi = 0, lo = -1000000, tong = 0;
    for (int i = 0; i < n; i++) {
        if (tong + a[i] < 0) {
            tong = 0;
            if (a[i] > lo) lo = a[i];
        }
        else tong += a[i];
        if (tong > loi) loi = tong;
    }
    if (loi != 0) cout << loi;
    else cout << lo;
}
    