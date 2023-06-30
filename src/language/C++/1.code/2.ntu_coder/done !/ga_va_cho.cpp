#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	double a = n, b = m;
	double y = b/2 - a;
	double x = a - y;
	if (x < 0|| y < 0 || int(x) != x || int(y) != y)
		cout << -1;
	else
		cout << x << ' ' << y;
}
    