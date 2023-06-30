#include <iostream>
using namespace std;

short n;
short a[10][10];

int main() {
    // Input
    cin >> n;
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++)
            cin >> a[i][j];
    }

    // Xu ly so
    for (short cot = 0; cot < n; cot++) {
        for (short dong = n-1; dong > 0; dong--) {
            if (a[dong][cot] != 0) {
                for (short dong_tam = dong-1; dong_tam >= 0; dong_tam--) {
                    if (a[dong_tam][cot] != 0 && a[dong_tam][cot] != a[dong][cot]) break;
                    if (a[dong][cot] == a[dong_tam][cot]) {
                        a[dong][cot] *= 2;
                        a[dong_tam][cot] = 0;
                        break;
                    }
                }
            }
        }
    }

    // Rut xuong day
    for (short cot = 0; cot < n; cot++) {
        for (short dong = n-1; dong > 0; dong--) {
            if (a[dong][cot] == 0) {
                for (short dong_tam = dong-1; dong_tam >= 0; dong_tam--) {
                    if (a[dong_tam][cot] != 0) {
                        swap(a[dong][cot], a[dong_tam][cot]);
                        break;
                    }
                }
            }
        }
    }

    // Output
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << (i < n-1 ? "\n" : "");
    }
}