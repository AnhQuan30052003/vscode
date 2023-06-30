#include <iostream>
#include <conio.h>
#include "file_chim.h"
#include "file_tru.h"

using namespace std;
const short D = 30, C = 120; // Kích thước

char a[30][120];

// Game
void Game() {
    VeKhung(D, C);
    short x = 7, y = 8;    // Vị trí ban đầu của chim
    short dem = 0;
    TaoTru(a, D, C);

    while (true) {
        while (!kbhit()) {
            if (dem == 15) {
                TaoTru(a, D, C);
                dem = 0;
            }
            HienThiTru(a, D, C);
            VeMoiViTriChim(x, y);
            Sleep(150);
            Xoa(a, D, C);
            DiChuyenTru(a, D, C);
            dem += 1;
            XoaViTriCuChim(x, y);
            if (y < D-4) {
                if (y % 2 == 1) y += 1;
                else y += 2;
            }
        }
        char key = getch();
        if (key == 72) {
            if (y == 2) y -= 1;
            if (y > 6) y -= 6;
        }
    }
}

// Main
int main() {
    cout << "Bien dich thanh cong !";
    getch();
    system("cls");
    Game();    
}