// Thuat toan to mau do thi //
#include <iostream>
#include <fstream>
#define M 100
using namespace std;

bool DaToMau[M];
short a[M][M];
short Bac[M], Dinh[M];
short n;

void SapXep() {
    for (short i = 1; i < n; i++) {
        for (short j = i+1; j <= n; j++) {
            if (Bac[Dinh[i]] < Bac[Dinh[j]]) {
                swap(Dinh[i], Dinh[j]);
            }
        }
    }
}

void LayDuLieu() {
    ifstream file ("do_thi.txt");
    file >> n;
    for (short i = 1; i <= n; i++) {
        Dinh[i] = i;
        short dem = 0;
        for (short j = 1; j <= n; j++) {
            file >> a[i][j];
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
    for (short i = 1; i <= n; i++) {
        cout << Dinh[i] << ' ';
    }

    cout << endl;
    for (short i = 1; i <= n; i++) {
        if (DaToMau[Dinh[i]] == true) continue;
        else {
            DaToMau[Dinh[i]] = true;
            dem += 1;
            for (short j = 2; j <= i; j++) {
                cout << "_ ";
            }
            cout << mau << ' ';
        }
        short x = 0;
        short b[n];
        b[x] = Dinh[i];
        for (short j = i+1; j <= n; j++) {
            if (a[b[x]][Dinh[j]] == 0 && DaToMau[Dinh[j]] == false) {
                bool trung = false;
                for (short m = 0; m <= x; m++) {
                    if (a[b[m]][Dinh[j]] == 1) {
                        trung = true;
                        break;
                    }
                }
                if (trung == false) {
                    DaToMau[Dinh[j]] = true;
                    dem += 1;
                    x += 1;
                    b[x] = Dinh[j];
                    cout << mau << ' ';
                }
                else cout << "_ ";
            }
            else cout << "_ ";
        }
        mau += 1;
        cout << endl;
        if (dem == n) break;
    }

    cout << endl;
    cout << "Bac cac dinh:" << endl;
    for (short i = 1; i <= n; i++) {
        cout << "Dinh " << i << " bac: " << Bac[i] << endl;
    }
}