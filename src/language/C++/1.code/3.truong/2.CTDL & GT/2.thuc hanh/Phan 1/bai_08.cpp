// Mo phong trai banh di chuyen 
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// Cac bien so
const int n = 29, m = 119;
int y, x;           // Toa do ban dau cua banh banh
int dy = 1, dx = 1; // Gia toc di chuyen

// An con tro
void Nocursortype() {
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// Di chuyen con tro
void Gotoxy(short x, short y) {
    HANDLE time = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(time, pos);
    Nocursortype();
}

// Tao mau cho chu
void TextColor(int x) {
    HANDLE mau = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}

// Mau nen - backgound
void TextBackground() {
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(screen, 1);
}

// Hien thi mau chu
void MauChu(char c) {
    TextColor(6);
    cout << c;
    TextColor(7);
}

// Hien thi man hinh
void HIenThiBang() {
    TextBackground();
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0 || i == n || j == m) cout << "#";
            else cout << ' ';
        }
        cout << (i == n ? "" : "\n");
    }
}

int main() {
    cout << "Nhap toa do ban dau cua qua bong (y,x): ";
    cin >> y >> x;
    system("cls");
    HIenThiBang();

    int a[n+1][m+1];
    while (true) {
        int ty = -1, tx = -1;
        if (y + dy <= 0) dy = 1;
        else if (y + dy >= n) dy = -1;
        if (x + dx <= 0) dx = 1;
        else if (x + dx >= m) dx = -1;

        if (y == 1 || y == n-1) {
            tx = x;
            if (y == 1) ty = 0;
            if (y == n-1) ty = n;
        }

        if (x == 1 || x == m-1) {
            ty = y;
            if (x == 1) tx = 0;
            if (x == m-1) tx = m;
        }

        if (tx != -1 && ty != -1) {
            if (a[ty][tx] == 1) break;
            else {
                Gotoxy(tx, ty);
                cout << ' ';
                a[ty][tx] = 1;
            }
        }
        Gotoxy(x+dx, y+dy);
        MauChu('O');
        Gotoxy(x, y);
        cout << ' ';
        y += dy; x += dx;
        Sleep(100);
    }
}