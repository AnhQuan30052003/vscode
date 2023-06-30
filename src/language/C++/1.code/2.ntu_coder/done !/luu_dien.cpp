// Luu dien
#include <iostream>

using namespace std;

void Quick_Sort(int a[], int b[], int f, int l) {
	int left = f, right = l;
	int x = a[(f+l)/2];

	while (left <= right) {
		while (a[left] < x && left < l) left++;
		while (a[right] > x && right > f) right--;
		if (left <= right) {
			swap(a[left], a[right]);
			swap(b[left], b[right]);
			left++;
			right--;
		}
	}

	if (left < l) Quick_Sort(a,b, left, l);
	if (right > f) Quick_Sort(a, b, f, right);
}

int So_Doan_Nhac_Nhieu_Nhat(int a[], int b[], int n) {
	int dem = 1;
	int x = b[0];
	for (int i = 1; i < n; i++)
		if (x < a[i]) {
			++dem;
			x = b[i];
		}
		else if (x > b[i]) x = b[i];
	return dem;
}

int main() {
	// Lay du lieu
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];

	// Tien hanh sap xep va tim ket qua
	Quick_Sort(a, b, 0, n-1);
	cout << So_Doan_Nhac_Nhieu_Nhat(a, b, n);
}