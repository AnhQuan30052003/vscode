#include <iostream>
using namespace std;

int main() {
    // In put
    short n, so = 2;
    cin >> n;
    short x = 0, y = 1, dx = 0, dy = 1;
    short a[n][n];

    // Xu ly
    a[0][0] = 1;
    while (so <= n*n) {
        a[x][y] = so++;
        // Trai sang phai
        if (dx == 0 && dy == 1) {
            if (x == 0) {
                dx = 1; dy = -1;
            }
            else if (x == n-1) {
                dx = -1; dy = 1;
            }
        }
        // trn xuong duoi
        else if (dx == 1 && dy == 0) {
            if (y == 0) {
                dx = -1; dy = 1;
            }
            else if (y == n-1) {
                dx = 1; dy = -1;
            }
            else if (x == 0) {
                dx = 0; dy = 1;
            }
        }
        // Cheo: phai sang trai
        else if (dx == 1 && dy == -1) {
            if (y == 0 && x != n-1) {
                dx = 1; dy = 0;
            }
            else if (x == n-1) {
                dx = 0; dy = 1;
            }
        }
        // Cheo: trai sang phai
        else {
            if (y == n-1) {
                dx = 1; dy = 0;
            }
            else if (x == 0) {
                dx = 0; dy = 1;
            }
        }
        x += dx; y += dy;
    }

    // Output
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}