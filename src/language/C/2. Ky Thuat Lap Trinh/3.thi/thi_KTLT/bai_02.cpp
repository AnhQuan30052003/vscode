#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

fstream file;

int n;
char chuoi[20];
char mt[20][20];

// Gia toc bien doi:
int ngang[2] = {0, 1};
int doc[2]   = {1, 0};

void doc_du_lieu() {
    ifstream file ("INPUT.DAT");
    if (file.fail())
        cout << "Mo file that bai !";
    else {
        file.getline(chuoi, 10);
        cout << "Chuoi doc duoc: " << chuoi << endl;
        n = strlen(chuoi);
    }
}

void tao_ma_tran() {
    for (int d = 0; d < n; d++) {
        for (int c = 0; c < n-d; c++)
            mt[d][c] = chuoi[d+c]; 
    }
}

void kiem_tra() {
    mt[0][0] = '*';
    for (int d = 0; d < n; d++) {
        for (int c = 0; c < n-d; c++)
            cout << ' ' << mt[d][c];
        cout << endl;
    }
    cout << endl;
}

void thu(int x, int y, int dai) {
    for (int i = 0; i <= 1; i++) {
        x = x + ngang[i];
        y = y + doc[i];

        char ki_tu = mt[x][y];
        mt[x][y] = '*';
        if (dai == n) kiem_tra();
        else thu(x ,y, dai+1);

        mt[x][y] = ki_tu;
        x = x - ngang[i];
        y = y - doc[i];
    }
}

int main() {
    doc_du_lieu();
    tao_ma_tran();
    thu(0,0,2);
}