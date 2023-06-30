// Chuong trinh phan chia dau cach thap phan
#include <iostream>
using namespace std;

void LayGiaTri(long long* a, long long n, int& size) {
	size = 0;
	for (n; n > 0; n /= 10)
		a[++size] = n % 10;
}

void ThapPhan(long long n) {
	// Lay so ra mot mang
	long long a[10];
	int size;
	LayGiaTri(a, n, size);

	int so_dau_phay = 0;
	if (size > 3) so_dau_phay = size/3;

	for (int i = size; i >= 1; i--) {
		cout << a[i];
		if ((i-1) % 3 == 0 && (i-1) > 0 && so_dau_phay != 0)
			cout << ',';
	}
}

int main() {
	long long n;
	cout << "Nhap n = ";
	cin >> n;
	ThapPhan(n);
}