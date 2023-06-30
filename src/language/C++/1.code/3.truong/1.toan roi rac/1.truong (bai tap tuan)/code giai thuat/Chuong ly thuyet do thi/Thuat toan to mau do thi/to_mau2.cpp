// Thuat toan to mau do thi //
#include <iostream>
#define M 100
using namespace std;

short a[M][M];
short Bac[M], Dinh[M], DaToMau[M];
short n;

void SapXep() {
    for (short i = 0; i < n-1; i++) {
        for (short j = i+1; j < n; j++) {
            if (Bac[Dinh[i]] < Bac[Dinh[j]]) {
                swap(Dinh[i], Dinh[j]);
            }
        }
    }
}

void LayDuLieu() {
    cin >> n;
    for (short i = 0; i < n; i++) {
        Dinh[i] = i;
        short dem = 0;
        for (short j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) dem += 1;
        }
        Bac[i] = dem;
    }
}

int main() {
    system("cls");
    LayDuLieu();
    SapXep();

    short mau = 1, dem = 0;
    for (short i = 0; i < n; i++) {
        if (DaToMau[Dinh[i]] != 0) continue;
        DaToMau[Dinh[i]] = mau;
        dem += 1;
        short x = 0;
        short b[n];
        b[0] = Dinh[i];
        for (short j = i+1; j < n; j++) {
            if (a[x][Dinh[j]] == 0 && DaToMau[Dinh[j]] == 0) {
                bool trung = false;
                for (short k = 0; k <= x; k++) {
                    if (a[b[k]][Dinh[j]] != 0) {
                        trung = true;
                        break;
                    }
                }
                if (trung == false) {
                    DaToMau[Dinh[j]] = mau;
                    dem += 1;
                    x += 1;
                    b[x] = Dinh[j];
                }
            }
        }
        if (dem == n) break;
        mau += 1;
    }

    for (short i = 0; i < n; i++) {
        cout << "dinh " << i << ": " << "mau: " << DaToMau[i] << endl;
    }
    cout << "K-sac = " << mau;
}