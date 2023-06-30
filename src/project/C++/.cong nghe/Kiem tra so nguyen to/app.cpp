//  App kiểm tra số nguyên tố 
#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;

// Hàm di chuyển con trỏ
void Gotoxy(short x, short y) {
    HANDLE t = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(t, pos);
}

// Hàm xóa màn hình
void Clear() {
    HANDLE t = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD p = {0, 0};
    SetConsoleCursorPosition(t, p);
}

// Thay đổi màu sắc
void Color(short mau) {
    HANDLE t = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(t, mau);
}

bool SoNguyenTo(long long n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

// Giao diện
void GiaoDien() {
    Gotoxy(46, 1);
    cout << "/// Kiem tra so nguyen to ///";
    Gotoxy(45, 3);
    cout << "+-----------------------------+";
    Gotoxy(45, 4);
    cout << "| N =                         |";
    Gotoxy(45, 5);
    cout << "+-----------------------------+";
    Gotoxy(45, 6);
    cout << "|-----[Ket qua]:--[   ]-------|";
    Gotoxy(45, 7);
    cout << "+-----------------------------+";
}

int main() {
    cout << "Bien dich thanh cong !" << endl;
    cout << "Nhan bat ky phim nao de chuyen tiep !";
    getch();

    long long n;
    string s;
    NhapLai:
    system("cls");
    while (true) {
        GiaoDien();
        Gotoxy(51,4);
        getline(cin, s);
        if (s.empty()) goto NhapLai;
        for (char x : s) {
            if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z') goto NhapLai;
        }
        n = atoi(s.c_str());
        Gotoxy(64, 6);
        if (SoNguyenTo(n)) {
            Color(10);
            cout << "YES";
        }
        else {
            Color(4);
            cout << "NO";
        }
        Color(15);
        Gotoxy(45, 9);
        cout << "Nhan [Enter] de kiem tra lai !";
        getch();
        Clear();
    }
}