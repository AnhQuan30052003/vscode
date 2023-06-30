#include <iostream>
using namespace std;

/*
7
0 1 1 0 0 0 0
1 0 0 0 0 0 0
1 0 0 0 0 0 0
0 0 0 0 1 1 0
0 0 0 1 0 1 0
0 0 0 1 1 0 0
0 0 0 0 0 0 0
4 7
*/

int a[100][100];
int n, v1, v2;
bool ton_tai = false;

void Thu(int v1, int v2) {
    if (ton_tai) return;
    if (a[v1][v2] == 1) {
        ton_tai = true;
        return;
    }
    for (int i = v1+1; i <= n; i++) {
        if (ton_tai) return;
        if (a[v1][i] == 1) {
            Thu(i, v2);
        }
    }
}

int main() {
    system("cls");
    // input
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> v1 >> v2;

    if (v1 != v2) Thu(v1, v2);

    // output
    if (ton_tai) cout << "ton tai";
    else cout << "khong ton tai";
}