// Chương trình đệ quy tính giai thừa
#include <iostream>
using namespace std;

long long int GT(int n) {
    if (n == 0 || n == 1) return 1;
    return n * GT(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << GT(n);
}