#include <iostream>
using namespace std;
#define M 100

int n;
int a[M][M];
int tong = 0;

bool VoHuong() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                return false;
    }
    return true;
}

void Tinh() {
    int dem;
    if (VoHuong()) {
        for (int i = 0; i < n; i++) {
            dem = 0;
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1) {
                    dem += 1;
                    if (a[j][i] == 1 && i == j) dem += 1;
                }
            }
            cout << dem << ' ';
            tong += dem;
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            dem = 0;
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1) dem += 1;
            }
            tong += dem;
            cout << dem << ' ';
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    Tinh();
    cout << tong;
}