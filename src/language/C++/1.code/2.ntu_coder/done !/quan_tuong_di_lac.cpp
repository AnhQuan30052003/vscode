#include <iostream>
using namespace std;

int so_buoc = 100, dem = 0;

// Huong di chuyen
short tx[4] = {-2,-2,+2,+2};
short ty[4] = {-2,+2,-2,+2};

short a[9][9];

// Thu di chuyen theo 4 huong
void Thu(short x, short y, short n, short m) {
    for (short i = 0; i < 4; i++) {
        int p = x + tx[i];
        int q = y + ty[i];

        if (p >= 1 && p <= 8 && q >= 1 && q <= 8 && a[p][q] != 1) {
            dem += 1;
            x = p;
            y = q;
            a[p][q] = 1;
            if (x == n && y == m) {
                if (dem < so_buoc) so_buoc = dem;
                dem -= 1;
                a[x][y] = 0;
                return;
            }
            Thu(x, y, n, m);
            dem -= 1;
            a[p][q] = 0;
            x -= tx[i];
            y -= ty[i];
        }
    }
}

int main() {
    short x, y, n, m;
    cin >> x >> y >> n >> m;
    if (x == n && y == m) cout << 0;
    else {
        a[x][y] = 1;
        Thu(x, y, n, m);
        if (so_buoc != 100) cout << so_buoc;
        else cout << -1;
    }
}