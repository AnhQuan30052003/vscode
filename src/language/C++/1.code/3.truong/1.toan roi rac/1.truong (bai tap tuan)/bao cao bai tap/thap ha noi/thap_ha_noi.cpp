/// Bai toan - Thap Ha Noi - ///
#include <iostream>
using namespace std;

void HN(int so_dia, char vt1, char vt2, char vt3) {
    if (so_dia == 1) {
        cout << vt1 << " -> " << vt2 << endl;
        return;
    }
    HN(so_dia-1, vt1, vt3, vt2);
    cout << vt1 << " -> " << vt2 << endl;
    HN(so_dia-1, vt3, vt2, vt1);
}

int main() {
    int so_dia;
    cout << "Soo dia ?: ";
    cin >> so_dia;
    HN(so_dia, 'A', 'B', 'C');
}