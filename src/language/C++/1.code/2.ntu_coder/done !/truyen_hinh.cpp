#include <iostream>
using namespace std;

void SapXep(int* a, int* b, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}

	SapXep(a, b, n);
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++)
			if (b[i] > a[j])
				++dem;
	}
	cout << dem;
}