#include <iostream>
using namespace std;

int a[10][10], xx[100], yy[100];
int n, sx, sy, dx, dy, m;
bool di_duoc = false;

// Thử trường hợp
void Thu(int x, int y, int k) {
    if (x == dx && y == dy) {
        xx[k] = x; yy[k] = y;
        m = ++k;
        di_duoc = true;
        return;
    }

    if (a[x][y] == 0) {
        a[x][y] = 1;
        xx[k] = x; yy[k] = y;
        if (x > 1 && !di_duoc) Thu(x-1, y, k+1);
        if (x < n && !di_duoc) Thu(x+1, y, k+1);
        if (y > 1 && !di_duoc) Thu(x, y-1, k+1);
        if (y < n && !di_duoc) Thu(x, y+1, k+1);
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
    Thu(sx, sy, 0);
    if (di_duoc) {
        cout << m << endl;
        for (int i = 0; i < m; i++) {
            cout << xx[i] << ' ' << yy[i] << endl;
        }
    }
    else cout << 0;
}