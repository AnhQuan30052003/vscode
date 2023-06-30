// chuoi hoan vi tiep theo
//vd: 123 - > 132
#include <iostream>
using namespace std;

void HoanViTiepTheo(int a[], int n) {
	int j = n-2, k, l, r = n-1;
	if (j <= 0 && n == 1) return;
	else {
		while (a[j] > a[j+1] && j > 0)
			j -= 1;
		k = n-1;
		while (a[j] > a[k])
			k -= 1;
		swap(a[j], a[k]);
		l = j+1;
		while (l < r) {
			swap(a[l], a[r]);
			l += 1;
			r -= 1;
		}
		for (int i = 0; i < n; i++)
			cout << a[i];
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	HoanViTiepTheo(a, n);
}