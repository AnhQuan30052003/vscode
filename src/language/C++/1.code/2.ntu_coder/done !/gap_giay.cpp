#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = 1; i <= 10; i++) {
		a *=  2;
		if (a == b) {
			cout << i;
			break;
		}
		if (a > b) {
			cout << i-1;
			break;
		}
	}
}