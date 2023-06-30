// Bang cuu chuong
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void Goto(short x, short y) {
    HANDLE time = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(time, pos);
}

int main() {
    int x = 0;
    cout << "Bien dich thanh cong !";
    getch();
    system("cls");
    for (int i = 2; i <= 9; i++) {
        Goto(x, 0);
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << (j == 10 ? "" : "\n");
            Goto(x, j);
        }
        x += 15;
    }
    getch();
}