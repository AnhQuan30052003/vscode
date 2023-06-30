#include <iostream>
#include <algorithm>
using namespace std;

short n;
short a[10][10];
short d[100];

int main() {
    system("cls");
    // Input
    cin >> n;
    short dem_so_1 = 0;
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1)
                dem_so_1 += 1;
        }
    }

    // Xu ly
    short k = 0;
    for (short cot = 0; cot < n; cot++) {
        short dem = 0;
        for (short dong = 0; dong < n; dong++)
            if (a[dong][cot] == 1) dem += 1;
        d[k++] = dem;
    }

    for (short dong = 0; dong < n; dong++) {
        short dem = 0;
        for (short cot = 0; cot < n; cot++)
            if (a[dong][cot] == 1) dem += 1;
        d[k++] = dem;
    }

    cout << dem_so_1 << endl;
    for (short i = 0; i < k; i++) {
        cout << d[i] << ' ';
    }
    cout << endl;

    sort(d, d+k);
    short dem_tat = 0;
    for (short i = k-1; i >= 0; i--) {
        if (dem_so_1 >= 0) {
            dem_so_1 -= d[i];
            dem_tat += 1;
            if ((dem_so_1 == 0) || dem_so_1 < 0) break;
        }
    }

    //Ouput
    cout << dem_tat << endl;
}
