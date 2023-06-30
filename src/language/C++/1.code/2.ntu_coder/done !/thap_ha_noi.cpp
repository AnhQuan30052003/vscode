#include <iostream>
using namespace std;

int n, k;
int dem = 0;
int soDia[100];

void HN(int n, char vt1, char vt2, char vt3) {
    if (n == 1) {
        soDia[int(vt1)]--; soDia[int(vt2)]++;
        ++dem;
        if (dem == k) return;
    }
    else {
        HN(n-1, vt1, vt3, vt2);
        if (dem == k) return;
        soDia[int(vt1)]--; soDia[int(vt2)]++;
        ++dem;
        if (dem == k) return;
        HN(n-1, vt3, vt2, vt1);
    }
}

int main() {
    cin >> n >> k;
    soDia[65] = n; soDia[66] = 0; soDia[67] = 0;
    HN(n, 'A', 'B', 'C');
    for (int i = 65; i <= 67; i++) {
        cout << soDia[i] << ' ';
    }
}