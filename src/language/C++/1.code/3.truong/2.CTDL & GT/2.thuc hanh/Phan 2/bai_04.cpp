// Phân tích số
#include <iostream>
using namespace std;

void PhanTich(int& n) {
    for (int i = 2; i <= n; i++)
        if (n % i == 0) {
            cout << i;
            if (n > i) cout << '*';
            else n = 0;
            n /= i;
            PhanTich(n);
        }
}

int main() {
    int n;
    cin >> n;
    PhanTich(n);
}