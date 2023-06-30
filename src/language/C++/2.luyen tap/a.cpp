// So chinh phuong
#include <iostream>
using namespace std;

bool SCP(int n) {
    for (int i = 1; i <= n; i++) {
        if (i*i == n) return true;
    }
    return false;
}

int main() {
    system("cls");
    int n;
    cin >> n;
    SCP(n) ? cout << "YES" : cout << "NO";
}