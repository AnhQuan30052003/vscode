// Tim so hop lien au
#include <iostream>
using namespace std;

int n, k;

void ToHopTiepTheo() {
	int a[k+1];
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
	}

	int i = k;
	while (a[i] == n-k+i) {
		i -= 1;
	}
	if (i <= 0) return;
	a[i] += 1;
	for (int j = i+1; j <= k; j++) {
		a[j] = a[i] + j - i;
	}
	for (int i = 1; i <= k; i++) {
		cout << a[i] << (i == k ? "\n" : "");
	}
}

int main() {
	cin >> n >> k;
	ToHopTiepTheo();
}