#include <iostream>
#include <fstream>
using namespace std;

short size, so_dinh_tham = 0;
short a[100][100];
bool Tham[100];

void LayDuLieu() {
    ifstream file ("do_thi.txt");
    file >> size;
    for (short i = 1; i <= size; i++) {
        for (short j = 1; j <= size; j++) {
            file >> a[i][j];
        }
    }
}

void DFS(short dinh) {
    Tham[dinh] = true;
    so_dinh_tham += 1;
    for (short i = 1; i <= size; i++) {
        if (a[dinh][i] == 1 && Tham[i] == false) {
            DFS(i);
        }
    }
}

int main() {
    system("cls");
    LayDuLieu();
    DFS(1);
    if (so_dinh_tham == size)
        cout << "Do thi lien thong";
    else
        cout << "Do thi khong lien thong !";
}