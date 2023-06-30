#include <iostream>
#include <cmath>
using namespace std;

int SoNam(long long n, long long m) {
	int i;
	for (i = 1; i <= 1000; i++) {
		n += round((float) n / 10);
		if (n >= m)
			break;
	}
	return i;
}

int main() {
	long long n, m;
	cin >> n >> m;
	cout << SoNam(n, m); 	
}