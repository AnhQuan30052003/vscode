// Tháp hà nội
#include <iostream>
using namespace std;

void ThapHN(int n, char vt1, char vt2, char vt3) {
    if (n == 1) {
        cout << vt1 << " -> " << vt2 << endl;
        return;
    }
    ThapHN(n-1, vt1, vt3, vt2);
    cout << vt1 << " -> " << vt2 << endl;
    ThapHN(n-1, vt3, vt2, vt1);
}

int main() {
    int n;
    cin >> n;
    ThapHN(n, 'A', 'B', 'C');
}