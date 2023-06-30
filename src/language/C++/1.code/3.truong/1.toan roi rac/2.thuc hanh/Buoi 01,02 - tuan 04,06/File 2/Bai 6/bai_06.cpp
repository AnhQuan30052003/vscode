// Tim so hop lien au
#include <iostream>
using namespace std;

int n, k;
int dem = 1;

void ToHopTiepTheo() {
	int a[k+1];
	for (int i = 1; i <= k; i++) {
		a[i] = i;
		cout << a[i] << (i == k ? "\n" : "");
	}

	while (true) {
		int i = k;
		while (a[i] == n-k+i)
			i -= 1;
		if (i <= 0) return;
		else ++dem;
		a[i] += 1;
		for (int j = i+1; j <= k; j++)
			a[j] = a[i] + j - i;
		for (int i = 1; i <= k; i++)
			cout << a[i] << (i == k ? "\n" : "");
	}
}

int main() {
    cout << "Nhap 2 so nguyen duong n & k: ";
	cin >> n >> k;
	ToHopTiepTheo();
	cout << dem;
}