#include <iostream>
#include "file_win.h"
using namespace std;

// Khai báo chim (hình dạng)
char Chim[3][5] {
    {' ','\\','\\',' ',' ',},
    {'>','-','(',')','>',},
    {' ','/','/',' ',' '}
};

// Vẽ mới vị tri của chim
void VeMoiViTriChim(short x, short y) {
    for (short i = 0; i < 3; i++) {
        Goto(x, y+i);
        for (short j = 0; j < 5; j++) {
            cout << Chim[i][j];
        }
    }
    HidenPoint();
    // Sleep(90);
}

// Xóa vị trí cũ của chim
void XoaViTriCuChim(short x, short y) {
    for (short i = 0; i < 3; i++) {
        Goto(x, y+i);
        for (short j = 0; j < 5; j++) {
            cout << ' ';
        }
    }
}

// Vẽ khung
void VeKhung(short D, short C) {
    for (short i = 0; i < D; i++) {
        for (short j = 0; j < C; j++) {
            if (i == 0 || j == 0 || i == D-1 || j == C-1) cout << '#';
            else cout << ' ';
        }
        if (i != D-1) cout << endl;
    }
}
