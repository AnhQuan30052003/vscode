#include <iostream>
using namespace std;

short n, dem = 0;
short a[1000];
bool co = false;

void KiemTra() {
    dem += 1;
    int tong_3 = 0, tong_7 = a[0];
    for (short i = 0; i < n; i++) {
        tong_3 += a[i];
        if (i < n-1) {
            tong_7 = tong_7 * 3 + a[i+1];
            for (short i = 1; i <= 10; i++) {
                if (tong_7 > i * 7) tong_7 -= i * 7;
                else break;
            }
        }
    }
    if (tong_3 % 3 == 0 && tong_7 % 7 == 0)
        co = true;
}

void Thu(short vt) {
    for (short i = 0; i <= 9; i++) {
        a[vt] = i;
        if (vt < n-1 && dem < 100) Thu(vt+1);
        else KiemTra();
        if (co) return;
        a[vt] = 0;
    }
}

int main() {
    cin >> n;
    if (n == 1) cout << -1;
    else if (n == 2) cout << 21;
    else {
        a[0] = 1;
        Thu(1);
        if (!co) cout << -1;
        else {
            for (short i = 0; i < n; i++) {
                cout << a[i];
            }
        }
    }
}