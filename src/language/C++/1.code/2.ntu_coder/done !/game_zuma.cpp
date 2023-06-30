#include <iostream>
using namespace std;

short n, k;
char c;
char arr[101];
int tong = 0;

void Zuma() {
    while (true) {
        // Kiem tra gioi han phan bong an duoc
        short dau = -1, cuoi = -1;
        // Kiem tra phan bat dau
        for (short i = k-1; i >= 0; i--) {
            if (arr[i] != c) {
                dau = i + 1;
                break;
            }
        }
        // Kiem tra phan ket thuc
        for (short i = k; i < n; i++) {
            if (arr[i] != c) {
                cuoi = i - 1;
                break;
            }
        }
        // Gan gioi han neu khong tim duoc !
        if (dau == -1) dau = 0;
        if (cuoi == -1) cuoi = n-1;

        // Tien hanh kiem tra chieu dai !
        int x = cuoi - dau + 1;
        if (x < 3) return;
        else {
            tong += x;
            char _d, _c;
            if (dau > 0) _d = arr[dau-1];
            else _d = arr[dau];
            if (cuoi < n-1) _c = arr[cuoi+1];
            else _c = arr[cuoi];

            if (_d != _c) return;
            else {
                n -= x;
                for (short i = dau; i < n; i++) {
                    arr[i] = arr[i+x];
                }
                c = _d;
                k = dau;
            }
        }
    }
}

int main() {
    // Phan Input
    cin >> n;
    for (short i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k >> c;

    // Chen
    if (k <= n) {
        for (short i = n; i > k-1; i--) {
            arr[i] = arr[i-1];
        }
        arr[k-1] = c;
    }
    else arr[n] = c;
    n += 1;

    Zuma();
    // Phan output
    cout << tong;
}
    