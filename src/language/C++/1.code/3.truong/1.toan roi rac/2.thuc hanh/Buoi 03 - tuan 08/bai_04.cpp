#include <iostream>
using namespace std;

long long TinhS(int n) {
    if (n <= 3) return n;
    return TinhS(n-1) + 2*TinhS(n-2) + 3*TinhS(n-3);
}

int main() {
    int n;
    cin >> n;
    cout << TinhS(n);
}