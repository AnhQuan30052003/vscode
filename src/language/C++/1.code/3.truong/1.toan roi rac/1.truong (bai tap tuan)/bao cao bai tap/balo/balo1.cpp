/// Bai toan balo1 - Nhanh can ///
#include <iostream>
using namespace std;

short V[] = {6,4,5};
short G[] = {7,11,10};

short v_bag = 5, v_toi_da = 0, g_toi_da = 0;
short n = sizeof(V)/sizeof(short);
int tong_V = 0, tong_G = 0;
short tt[100], luu_tt[100];

void KiemTra() {
    if (tong_V > v_bag || tong_G < g_toi_da) return;
    v_toi_da = tong_V;
    g_toi_da = tong_G;
    for (short i = 0; i < n; i++) {
        luu_tt[i] = tt[i];
    }
}

void ThuLay(short vt) {
    for (short i = 0; i <= 1; i++) {
        tt[vt] = i;
        if (i == 1) {
            tong_V += V[vt];
            tong_G += G[vt];
        }

        if (vt < n-1 && tong_V < v_bag) ThuLay(vt+1);
        else KiemTra();

        if (i == 1) {
            tong_V -= V[vt];
            tong_G -= G[vt];
        }
        tt[vt] = 0;
    }
}

int main() {
    ThuLay(0);
    cout << "The tich tui bo duoc: " << v_toi_da << '/' << v_bag << endl;
    cout << "Gia tri toi da lay duoc: " << g_toi_da << endl;
    cout << "Cac vat da lay:" << endl;
    for (int i = 0; i < n; i++) {
        if (luu_tt[i])
            cout << "The tich: " << V[i] << ", Gia tri: " << G[i] << endl;
    }
}