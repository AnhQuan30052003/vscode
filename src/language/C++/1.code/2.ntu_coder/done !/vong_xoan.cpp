#include <iostream>
using namespace std;

#define M 201

int main() {
    // Input
    int a[M][M];
    short x, y;
    cin >> x >> y;

    // Xu ly vong xoan
    bool bat_dau = false, duong_trai = false, duong_phai = false, duong_tren = false, duong_duoi = false;
    short kich_thuoc = 3;
    short tx = M/2, ty = M/2, dx = 0, dy = 0, nx = tx, ny = ty;

    int dem_trai = 0, dem_phai = 0, dem_tren = 0, dem_duoi = 0;
    int so = 1;

    a[M/2 - y][M/2 + x] = 0;
    while (a[M/2 - y][M/2 + x] == 0) {
        a[tx][ty] = so++;
        if (!bat_dau) {
            dx = 0; dy = 1;
            bat_dau = true;
        }
        else if (!duong_phai) {
            dx = -1; dy = 0;
            dem_phai += 1;
            if (dem_phai == kich_thuoc-2) {
                dem_phai = 0;
                duong_phai = true;
            }
        }
        else if (!duong_tren) {
            dx = 0; dy = -1;
            dem_tren += 1;
            if (dem_tren == kich_thuoc-1) {
                dem_tren = 0;
                duong_tren = true;
            }
        }
        else if (!duong_trai) {
            dx = 1; dy = 0;
            dem_trai += 1;
            if (dem_trai == kich_thuoc-1) {
                dem_trai = 0;
                duong_trai = true;
            }
        }
        else if (!duong_duoi) {
            dx = 0; dy = 1;
            dem_duoi += 1;
            if (dem_duoi = kich_thuoc-1) {
                dem_duoi = 0;
                duong_duoi = true;
            }
        }

        if (tx == nx+1 && ty == ny+1) {
            duong_trai = duong_phai = duong_tren = duong_duoi = false;
            kich_thuoc += 2;
            dx = 0; dy = 1;
            nx += 1; ny += 1;
        }
        tx += dx; ty += dy;
    }

    // Output
    cout << a[M/2 - y][M/2 + x];
}