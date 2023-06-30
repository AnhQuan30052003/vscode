#include <iostream>
#include <ctime>
using namespace std;

// Random vị tri xuất hiện của trụ
short Random_Vitri() {
    srand(time(NULL));
    return rand() % 2 + 1;
}

// Xóa vị trí cũ của các trụ trong ma trận
void Xoa(char a[30][120], short D, short C) {
    for (short cot = 1; cot <= C-2; cot++) {
        for (short dong = 1; dong <= D-2; dong++) {
            if (a[dong][cot] == 'x') {
                Goto(cot, dong);
                cout << ' ';
            }
        }
    }
}

// Tạo trụ
void TaoTru(char a[30][120], short D, short C) {
    short vt = Random_Vitri();
    short bd, kt;
    if (vt == 1) {
        bd = 1;
        kt = 14;
    }
    else {
        bd = 15;
        kt = 28;
    }

    for (short i = bd; i <= kt; i++) {
        for (short j = 114; j <= 118; j++) {
            a[i][j] = 'x';
        }
    }
}

// Di chuyển trụ
void DiChuyenTru(char a[30][120], short D, short C) {
    for (short i = 1; i <= D-2; i++) {
        for (short j = 1; j <= C-4; j++) {
            a[i][j] = a[i][j+2];
            a[i][j+2] = ' ';
        }
    }
}

// Hiển thị trụ
void HienThiTru(char a[30][120], short D, short C) {
    for (short cot = 1; cot <= C-2; cot++) {
        for (short dong = 1; dong <= D-2; dong++) {
            if (a[dong][cot] == 'x') {
                Goto(cot, dong);
                cout << a[dong][cot];
            }
        }
    }
    HidenPoint();
    // Sleep(150);
}