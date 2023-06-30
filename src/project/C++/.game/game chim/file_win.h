#include <windows.h>
using namespace std;

// An con tro chuot
void HidenPoint() {
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// Di chuyen con tro
void Goto(short x, short y) {
    HANDLE time = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(time, position);
}

// Xoa man hinh
void Clear() {
    HANDLE q = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD p = {0,0};
    SetConsoleCursorPosition(q, p);
}