#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n;
    int a[n];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++)
        a[i] = a[i-2] + a[i-1];
    return a[n-1];
}

int main() {
    system("cls");
    int n;
    do {
        cout << "Nhap n = ";
        cin >> n;
    } while (n < 0);
    cout << "Fibo(" << n << ") = " << fibo(n);
}