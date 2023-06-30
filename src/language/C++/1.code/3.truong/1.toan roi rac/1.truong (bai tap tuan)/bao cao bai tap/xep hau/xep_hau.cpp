/// Bai toan xep hau - ThuDat sai va quay lui ///
#include <iostream>
#include <cmath>
using namespace std;

short a[9]; // Mang 1 chieu dat vi tri
int dem = 0;

// Ham hien thi & dem ket qua
void InKetQua() {
    dem += 1;
    for (short i = 1; i <= 8; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

/*
    Kiem tra xem quan hau sap dat:
    a[j] = i ? -> tai vi tri j da co quan hau i roi hay khong ?
    abs(j-vt) == abs(a[j]-i) -> co nam tren duong cheo cua quan hau khac hay khong ?
*/

// Kiem tra xem vi tri vt co dat duoc quan Hau i hay khong ?
bool DatDuoc(short vt, short i) {
    for (short j = 1; j < vt; j++) {
        if (a[j] == i || abs(j-vt) == abs(a[j]-i))
            return false;
    }
    return true;
}

// ThuDat sai va quay lui
void ThuDat(short vt) {
    for (short i = 1; i <= 8; i++) {
        if (DatDuoc(vt, i)) {
            a[vt] = i; // Dat quan Hau ThuDat i tai vi tri vt
            if (vt == 8) InKetQua();
            else ThuDat(vt+1);
        }
    }
}

int main() {
    ThuDat(1);
    cout << "So ket qua: " << dem;
}