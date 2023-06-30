#include <iostream>
using namespace std;

int main() {
    // Input
    short n, so = 1;
    cin >> n;
    short a[n][n];
    short x = 0, y = 0, tx = x, ty = y, dx = 0, dy = 1;
    short tren = 0, duoi = n-1, trai = 0, phai = n-1;

    // Xu ly
    while (so <= n*n) {
        a[x][y] = so++;
        if (y == phai && dx == 0 && dy == 1) {
            dx = 1; dy = 0;
        }
        else if (x == duoi && dx == 1 && dy == 0) {
            dx = 0; dy = -1;
        }
        else if (y == trai && dx == 0 && dy == -1) {
            dx = -1; dy = 0;
        }
        else if (x == tren && dx == -1 && dy == 0) {
            dx = 0; dy = 1;
        }
        x += dx; y += dy;
        
        if (x == tx && y == ty) {
            tx += 1; ty += 1;
            x = tx;  y = ty;
            dx = 0;  dy = 1;

            phai -= 1;
            duoi -= 1;
            trai += 1;
            tren += 1;
        }
    }

    // Output
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << (j < n-1 ? " " : "");
        cout << (i < n-1 ? "\n" : "");
    }
}