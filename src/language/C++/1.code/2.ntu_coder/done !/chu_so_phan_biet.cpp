#include <iostream>
using namespace std;

int tt[10] = {0};

int main() {
	int n, x, dem = 0;
	cin >> n;
	while (n > 0) {
		x = n % 10;
		if (tt[x] != 1) {
			++dem;
			tt[x] = 1;
		}
		n /= 10;
	}
	cout << dem;
}