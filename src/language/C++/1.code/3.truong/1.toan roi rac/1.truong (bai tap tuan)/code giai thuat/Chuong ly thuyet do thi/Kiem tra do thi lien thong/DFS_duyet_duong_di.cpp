#include <iostream>
#include <fstream>
using namespace std;

short size;
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
    cout << dinh << ' ';
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
}