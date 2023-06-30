#include <iostream>
using namespace std;

int dem_rau = 0;
int n, m, x, y;
int a[102][102];

void TaoKhungRao() {
    for (int i = 0; i < 102; i++) {
        for (int j = 0; j < 102; j++)
            a[i][j] = 1;
    }
}

void TaoKhuVuc(int n, int m) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
}

void Thu(int x, int y) {
    if (a[x][y] == 0) {
        a[x][y] = 2;
        ++dem_rau;
        if (x > 1) Thu(x-1, y);
        if (x < n) Thu(x+1, y);
        if (y > 1) Thu(x, y-1);
        if (y < m) Thu(x, y+1);
    }
}

int main() {
    TaoKhungRao();
    cin >> n >> m >> x >> y;
    TaoKhuVuc(n, m);
    Thu(x,y);
    cout << dem_rau;
}