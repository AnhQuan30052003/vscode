// Tím số Fibi thứ n
#include <iostream>
using namespace std;

int F(int n) {
    if (n == 1 || n == 2) return 1;
    return F(n-1) + F(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << F(n);
}