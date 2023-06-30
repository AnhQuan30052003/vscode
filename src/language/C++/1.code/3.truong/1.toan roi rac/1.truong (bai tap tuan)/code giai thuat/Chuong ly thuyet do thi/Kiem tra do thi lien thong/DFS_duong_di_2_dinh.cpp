#include <iostream>
#include <fstream>
using namespace std;

short size, d1, d2;
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
    cout << "Dinh bat dau: ";
    cin >> d1;
    cout << "Dinh muon toi: ";
    cin >> d2;
}

void DFS(short dinh) {
    Tham[dinh] = true;
    if (dinh == d2) {
        cout << "Ton tai duong di tu dinh " << d1 << " den dinh " << d2;
        exit(false);
    }
    for (short i = 1; i <= size; i++) {
        if (a[dinh][i] == 1 && Tham[i] == false) {
            DFS(i);
        }
    }
}

int main() {
    system("cls");
    LayDuLieu();
    DFS(d1);
    cout << "Khong tai duong di tu dinh " << d1 << " den dinh " << d2 << '!';
}