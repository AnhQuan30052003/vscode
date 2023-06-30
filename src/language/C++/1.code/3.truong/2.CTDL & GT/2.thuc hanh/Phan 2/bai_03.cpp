// Tính tổ hợp chập k của n
#include <iostream>
using namespace std;

long long GT(int n) {
    if (n == 1 || n == 0) return 1;
    return n * GT(n-1);
}

long long TH(int n, int k) {
    return GT(n)/(GT(k)*GT(n-k));
}

int main() {
    int n, k;
    cin >> n >>k;
    cout << TH(n, k);
}