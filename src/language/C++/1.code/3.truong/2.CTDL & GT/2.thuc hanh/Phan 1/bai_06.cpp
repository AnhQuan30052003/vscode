// Cuon dong chu quang cao ngang man hinh
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

// Ấn con trỏ chuột trên màn hình
void HidenPoint() {
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// Di chuyển con trỏ
void Gotoxy(short x, short y) {
    HidenPoint();
    HANDLE time = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(time, position);
}

// Thay đổi màu sắc kí tự
void TextColor(char x) {
    HANDLE mau = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}

int main() {
    string text;
    cout << "Nhap noi dung can quang cao: ";
    getline(cin, text);
    system("cls");

    int x = 85, dem = 0;
    while (true) {
        // In ra khung gioi han in chu
        int n = 51;
        Gotoxy(35,10);
        TextColor(2);
        for (int i = 0; i <= n; i++) 
            if (i == 0 || i == n) cout << '|';
            else cout << ' ';

        // In chữ ra màn hình
        Gotoxy(x+dem, 10);
        TextColor(4);
        for (int i = x, j = dem; i < 86 && j < text.size(); i++, j++)
            cout << text[j];
        
        // Tính toàn lại vị trí in
        --x;
        if (x <= 35) ++dem;
        if (dem == text.size()){
            x = 85;
            dem = 0;
        }
        HidenPoint();
        Sleep(80);
    }
}