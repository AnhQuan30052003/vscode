#include <iostream>
using namespace std;

double m, n;

double lai(float m, float n, double ls) {
    if (n <= 0) return m;
    return (1 + ls) * lai(m, n-1, ls);
}

int main() {
    cin >> m >> n;
    if (n*12 < 3) cout << lai(m, n, 4.6/100);
    else if (n*12 < 6) cout << lai(m, n, 5.6/100);
    else if (n*12 < 12) cout << lai(m, n, 6.6/100);
    else cout << lai(m, n, 7.6/100);
}