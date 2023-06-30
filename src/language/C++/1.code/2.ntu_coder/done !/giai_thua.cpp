#include <iostream>
using namespace std;

long long GT(int n) {
	if (n == 1 || n == 0) return 1;
	return n * GT(n-1);
}

int main() {
	int n;
	cin >> n;
	cout << GT(n);
}