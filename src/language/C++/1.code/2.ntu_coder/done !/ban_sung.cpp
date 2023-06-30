#include <iostream>
using namespace std;

int Diem(char c, int x, int y) {
    char b[1];
    b[0] = c;

    int tong = 0;
    if (x == 3) {
        if (y == 3) tong = 10;
        else if (y == 2 || y == 4) tong = 9;
        else if (y == 1 || y == 5) tong = 8;
        else if (y == 0 || y == 6) tong = 7;
    }
    else if (x == 0 || x == 6) {
        if (y == 3) tong = 7;
        else if (y == 2 || y == 4) tong = 6;
    }
    else if (x == 1 || x == 5) {
        if (y == 3) tong = 8;
        else if (y == 2 || y == 4) tong = 7;
        else if (y == 1 || y == 5) tong = 6;
    }
    else if (x == 2 || x == 4) {
        if (y == 3) tong = 9;
        else if (y == 2 || y == 4) tong = 8;
        else if (y == 1 || y == 5) tong = 7;
        else if (y == 0 || y == 6) tong = 6;
    }
    return tong * atoi(b);
}

int main() {
    char a[7][7];
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            cin >> a[i][j];

    int tong = 0;
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            if (a[i][j] != '.')
                tong += Diem(a[i][j], i, j);
    cout << tong;
}