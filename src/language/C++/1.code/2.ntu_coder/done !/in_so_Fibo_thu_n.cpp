//In so fibonacy thu n //
#include <iostream>
using namespace std;

void InSoFibo(int n) {
	int a = 1, b = 1, c;

	for (int i = 1; i <= n; i++) {
		cout << a << " ";
		c = a + b;
		a = b;
		b = c;
	}
}

int main() {
	int n;
	cin >> n;
	InSoFibo(n);
}