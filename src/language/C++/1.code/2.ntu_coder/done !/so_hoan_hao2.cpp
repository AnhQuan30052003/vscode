#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n, s = 0;
	cin >> n;

	int i = 2;
	while (s < n) {
		s = (pow(2, i)-1) * (pow(2, i-1));
		i++;
	}
	if (s == n)
		cout << "YES";
	else
		cout << "NO";
}