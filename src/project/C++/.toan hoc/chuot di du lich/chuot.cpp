// Chuot di du lich //

#include <iostream>
using namespace std;

int n = 5;
int x, y;
int dem = 1;

// Gia so di chuyen
int ngang[4] = {0,0,1,-1};
int doc[4] = {1,-1,0,0};

// Ma tran di chuyen mo phong
int mt[7][7] = {
    0,0,0,  0,  0,0,0,
    0,  1,1,0,0,0,  0,
    0,  0,1,0,0,0,  0,
    0,  0,1,1,1,1,  0,
    0,  0,0,1,0,0,  0,
    0,  0,0,1,1,1,  0,
    0,0,0,  0,  0,0,0
};

// Ham hien thi ket qua
void in() {
    cout << "Cach: " << dem++ << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (mt[i][j] == 2) cout << 'x';
            else cout << 0;
            cout << (j == n ? "\n" : " ");
        }
    }
    cout << endl;
}

// Ham thu - tinh moi kha nang
void thu(int x, int y) {
    int tx, ty;
    for (int i = 0; i < 4; i++) {
        tx = x + ngang[i];
        ty = y + doc[i];

        if (mt[tx][ty] == 1) {
            x = tx;
            y = ty;
            mt[x][y] = 2;

            if (y != n) thu(x, y);
            else in();

            mt[x][y] = 1;
            x -= ngang[i];
            y -= doc[i];
        }
    }
}

// Chuong trinh chinh
int main() {
    for (int i = 1; i <= n; i++)
        if (mt[i][1] == 1) {
            x = i;
            y = 1;
            mt[x][y] = 2;
            thu(x, y);
            mt[x][y] = 1;
        }
}