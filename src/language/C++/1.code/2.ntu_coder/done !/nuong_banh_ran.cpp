#include <iostream>
using namespace std;

int NuongBanh(int n, int k) {
	if (n <= k) return 10;
	else {
		int so_mat = n * 2;
		if (so_mat % k == 0)
			return 5 * (so_mat / k);
		else
			return 5 * (so_mat / k) + 5;
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << NuongBanh(n, k);
}