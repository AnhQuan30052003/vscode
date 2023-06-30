// viet mot chuong trinh in ra tam giac tren va duoi
#include <iostream>
using namespace std;

void tam_giac_tren(int n);
void tam_giac_duoi(int n);

int main() {
    int n;
    cout << "Nhap kich thuoc n = ";
    cin >> n;
    tam_giac_tren(n);
    tam_giac_duoi(n);
}

// Tam giac tren
void tam_giac_tren(int n) {
    int sd = n/2 +1;
    for (int dong = 1; dong <= sd; dong++) {
        for (int cach = 1; cach <= sd-dong; cach++)
            cout << "  ";
        for (int sao = 1; sao <= 2*dong-1; sao++)
            cout << "* ";
        cout << endl;
    }
}

// Tam giac duoi
void tam_giac_duoi(int n) {
    int sd = n/2;
    for (int dong = sd; dong >= 1; dong--) {
        for (int cach = 1; cach <= sd+1 - dong; cach++)
            cout << "  ";
        for (int sao = 1; sao <= 2*dong-1; sao++)
            cout << "* ";
        cout << endl;
    }
}