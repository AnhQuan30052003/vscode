#include <iostream>
using namespace std;

int main() {
	int n, m, x, y;
	long long k;
	cin >> n >> m >> x >> y >> k;

	int lan = k % (2*(n-1)*(m-1));
	if (lan == 0) cout << x << ' ' << y;
	else {
		int dx = 1, dy = 1;
		for (int i = 1; i <= lan; i++) {
			if (x == 1) dx = 1;
			if (x == n) dx = -1;
			if (y == 1) dy = 1;
			if (y == m) dy = -1;
			x += dx; y += dy;
		}
		cout << x << ' ' << y;
	}
}