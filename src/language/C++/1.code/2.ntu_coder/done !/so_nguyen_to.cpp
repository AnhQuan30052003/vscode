// So nguyen to //
#include <iostream>
#include <cmath>
using namespace std;

bool SNT(long long n) {
	if (n < 2) return false;
	else if (n == 2) return true;
	else {
		for (long long i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false;
	}
	return true;
}

int main() {
	long long n;
	cin >> n;
	if (SNT(n)) cout << "YES";
	else cout << "NO";
}