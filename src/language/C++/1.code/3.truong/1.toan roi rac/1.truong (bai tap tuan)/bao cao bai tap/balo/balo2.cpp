/// Bai toan Balo - Quy hoach dong ///
#include <iostream>
using namespace std;

short V[] = {0,6,4,5};
short GT[] = {0,7,11,10};
short n = sizeof(V)/sizeof(short);
short p[50][300];
int V_max = 5, V_bo_duoc = 0;

bool MucTieuVaTruyVet() {
    for (short i = 1; i < n; i++) {
        for (short j = 1; j <= V_max; j++) {
            if (j >= V[i] && (p[i-1][j-V[i]] + GT[i] > p[i-1][j]))
                p[i][j] = p[i-1][j-V[i]] + GT[i];
            else p[i][j] = p[i-1][j];
        }
    }
    if (p[n-1][V_max] == 0) return false;
    return true;
}

void TruyVet() {
    for (short i = n-1, j = V_max; i > 0; i--) {
        if (p[i][j] != p[i-1][j]) {
            cout << "The tich: " << V[i] << ", Gia tri: " << GT[i] << endl;
            j -= V[i];
            V_bo_duoc += V[i];
        }
    }
}

int main() {
    if (MucTieuVaTruyVet()) {
        cout << "Cac vat da lay:" << endl;
        TruyVet();
        cout << "The tich bo duoc: " << V_bo_duoc << '/' << V_max << endl;
        cout << "Gia tri lay duoc: " << p[n-1][V_max];
    }
    else cout << "Khong the lay duoc vat nao co gia tri chi voi tui co V_max la: " << V_max;
}