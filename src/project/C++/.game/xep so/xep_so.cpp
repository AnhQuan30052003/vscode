#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const short X = 55, Y = 10;
int a[3][3] = {2,1,8,4,0,3,6,5,7};
int x = 1, y = 1;
int dx, dy;

// Ham di chuyen con tro mang hinh
void Gotoxy(short x, short y) {
    HANDLE q = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD p = {x, y};
    SetConsoleCursorPosition(q, p);
}

// Ham xoa man hinh nang cao
void Clear() {
    HANDLE q = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD p = {0,0};
    SetConsoleCursorPosition(q, p);
}

// Hien thi ban so va an con tro
void In() {
    short x = X, y = Y;

    Gotoxy(X, Y);
    cout << "+-----+";

    for (int i = 0; i < 3; i++) {
        Gotoxy(x, y+1);
        cout << '|';
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 0) cout << "  ";
            else cout << a[i][j] << " ";
        }
        Gotoxy(x+6, y+1);
        cout << '|';
        y += 1;
    }
    Gotoxy(x, y+1);
    cout << "+-----+";

    HANDLE q = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO p;
    p.bVisible = false;
    p.dwSize = 20;
    SetConsoleCursorInfo(q, &p);  
}

bool KiemTraThang() {
    if (a[2][2] != 0) return false;
    int x = 1, dem = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            if (a[i][j] == x) {
                x++;
                ++dem;
            }
    }
    if (dem == 8) return true;
    return false;
}

int main() {
    cout << "GAME XEP SO";
    getch();
    system("cls");

    char c;
    In();
    bool thay_doi = false;
    while (true) {
        Clear();
        c = getch();
        if (c == 72 && x < 2) { dx =  1; dy =  0; thay_doi = true; }
        if (c == 80 && x > 0) { dx = -1; dy =  0; thay_doi = true; }
        if (c == 75 && y < 2) { dx =  0; dy =  1; thay_doi = true; }
        if (c == 77 && y > 0) { dx =  0; dy = -1; thay_doi = true; }
        if (thay_doi) {
            a[x][y] = a[x+dx][y+dy];
            x += dx; y += dy;
            a[x][y] = 0;
            In();
            thay_doi = false;
        }
        if (KiemTraThang()) {
            Gotoxy(X, Y+6);
            cout << "Hoan thanh !";
            break;
        }
        if (c == 27) {
            Gotoxy(X, Y+6);
            cout << "Thoat !";
            break;
        }
    }
    getch();
}