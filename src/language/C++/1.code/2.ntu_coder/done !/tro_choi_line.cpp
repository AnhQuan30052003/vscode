#include <iostream>
using namespace std;

int a[10][10];
int n, sx, sy, dx, dy;
bool di_duoc = false;

void Thu(int x, int y) {
    if (x == dx && y == dy) {
        di_duoc = true;
        return;
    }

    if (a[x][y] == 0) {
        a[x][y] = 1;
        if (x > 1) Thu(x-1, y);
        if (x < n) Thu(x+1, y);
        if (y > 1) Thu(x, y-1);
        if (y < n) Thu(x, y+1);
    }
}

int main() {
    // Nhập giá trị
    cin >> n >> sx >> sy >> dx >> dy;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    // Kiểm tra
    a[sx][sy] = 0;
    Thu(sx, sy);
    if (di_duoc) cout << "YES";
    else cout << "NO";
}