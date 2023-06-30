// bài toán 8 hậu, áp dụng quay lui + đánh dấu trên mảng 2 chiều !
// Quy ước 2 là vị trí quân hậu, 1 là số ô khống chế
#include <iostream>
#include <conio.h>
using namespace std;

int x, y;
int a[9][9];
int tt[9] = {0};
bool co = false;

bool KiemTraCheo(int x, int y) {
    // Kiểm tra phần trên
    for (int i = x-1, j = y-1; i >= 1 && j >= 1; i--, j--) {
        if (a[i][j] == 2) return true;
    }
	for (int i = x-1, j = y+1; i >= 1 && j <= 8; i--, j++) {
        if (a[i][j] == 2) return true;
    }

	// Kiểm tra phần dưới
	for (int i = x+1, j = y-1; i <= 8 && j >= 1; i++, j--) {
        if (a[i][j] == 2) return true;
    }
	for (int i = x+1, j = y+1; i <= 8 && j <= 8; i++, j++) {
        if (a[i][j] == 2) return true;
    }
    return false;
}

void DanhDau(int x, int y, int trang_thai) {
    // Xủ lý phần trên
    for (int i = x-1, j = y-1; i >= 1 && j >= 1; i--, j--) {
		if (trang_thai == 1) a[i][j] = 1;
        else a[i][j] = 0;
    }
	for (int i = x-1, j = y+1; i >= 1 && j <= 8; i--, j++) {
		if (trang_thai == 1) a[i][j] = 1;
        else a[i][j] = 0;
    }

	// Xủ lý phần dưới
	for (int i = x+1, j = y-1; i <= 8 && j >= 1; i++, j--) {
		if (trang_thai == 1) a[i][j] = 1;
        else a[i][j] = 0;
    }
	for (int i = x+1, j = y+1; i <= 8 && j <= 8; i++, j++) {
		if (trang_thai == 1) a[i][j] = 1;
        else a[i][j] = 0;
    }
}

void KiemTra() {
    co = true;
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (a[i][j] == 2) cout << 'w';
            else cout << '.';
        }
        cout << (i == 8 ? "" : "\n");
    }
}

void Thu(int vt) {
    if (vt == x) Thu(vt+1);
    for (int i = 1; i <= 8; i++) {
        if (tt[i] != 1 && a[vt][i] == 0 && !KiemTraCheo(vt, i)) {
            tt[i] = 1;
            a[vt][i] = 2;
            DanhDau(vt, i, 1);
            
            if (vt == 8) KiemTra();
            else Thu(vt+1);
            if (co) return;

            DanhDau(vt, i, 0);
            tt[i] = 0;
            a[vt][i] = 0;
        }
    }
}

int main() {
    cin >> x >> y;
    a[x][y] = 2;
    tt[y] = 1;
    DanhDau(x, y, 1);
    Thu(1);
}