#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("cls");
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

    int m = a[0], hieu, x = 100;
    for (int i = 1; i < n; i++) {
        hieu = abs(a[i] - m);
        x = min(x, hieu);
        m = min(m, a[i]);
    }
    cout << x;
}