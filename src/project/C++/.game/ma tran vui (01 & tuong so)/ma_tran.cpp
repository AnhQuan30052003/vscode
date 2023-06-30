#include <iostream>
#include <windows.h>
using namespace std;

// ma tran so 0 1
void ma_tran_so_0_1(int n) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) 
            for (int j = 0; j < n; ++j) {
                Sleep(100);
                if (j % 2 == 0) cout << 0;
                else cout << 1;
                cout << (j == n-1 ? "\n" : " ");
            }
        else
            for (int j = 0; j < n; ++j) {
                Sleep(100);
                if (j % 2 == 0) cout << 1;
                else cout << 0;
                cout << (j == n-1 ? "\n" : " ");
            }
    }
}

// ma tran so bao boc
void ma_tran_so_bao_boc(int n) {
    for (int i = 0; i < n; ++i) {
        cout << i << " ";
        for (int j = 1; j < n; ++j) {
            Sleep(100);
            if (j >= i) cout << j;
            else cout << i;
            cout << (j == n-1 ? "\n" : " ");
        }
    }
}

int main() {
    int n;
    cout << "Nhap n = ";
    cin >> n;

    system("cls");
    ma_tran_so_0_1(n);
    system("pause");
    system("cls");
    ma_tran_so_bao_boc(n);
}