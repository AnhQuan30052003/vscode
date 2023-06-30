// In tam giac can dac va rong
#include <iostream>
#include <windows.h>
using namespace std;

void Goto(short x, short y) {
    HANDLE time = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(time, pos);
}


void TamGiacCanDac(int n, short x, short y) {
    int h = n, in = 1;
    int tx = x, ty = y;
    for (int i = 0; i < n; i++) {
        // In dau cach
        for (int j = 0; j < h; j++) {
            Goto(x++, y);
            cout << " ";
        }
        // in *
        for (int j = 0; j < 2*i+1; j++) {
            Goto(x++, y);
            cout << "*";
        }
        h -= 1;
        in += 2;
        ++y;
        x = tx;
        cout << endl;
    }
}

void TamGiacCanRong(int n, short x, short y) {
    int h = n, in = 1;
    int tx = x, ty = y;
    for (int i = 0; i < n; i++) {
        // In dau cach
        for (int j = 0; j < h; j++) {
            Goto(x++, y);
            cout << " ";
        }
        // in *
        for (int j = 0; j < 2*i+1; j++) {
            Goto(x++, y);
            if (j == 0 || j == 2*i || i == n-1) cout << "*";
            else cout << " ";

        }
        h -= 1;
        in += 2;
        ++y;
        x = tx;
        cout << endl;
    }    
}

int main() {
    system("cls");
    int n;
    cin >> n;
    TamGiacCanDac(n, 0, 0);
    cout << endl;
    TamGiacCanRong(n, n*3, 0);
    Goto(0,n+1);
}