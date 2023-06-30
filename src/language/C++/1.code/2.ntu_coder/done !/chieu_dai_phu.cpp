#include <iostream>
using namespace std;

using ll = long long;

void QuickSort(ll* a, ll* b, int f, int l) {
    int left = f, right = l;
    ll x = a[(f+l)/2];

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

    if (f < right) QuickSort(a, b, f, right);
    if (left < l) QuickSort(a, b, left, l);
}

int main() {
	int n;
	cin >> n;
	ll s[n], d[n];
	for (int i = 0; i < n; i++)
		cin >> s[i] >> d[i];

	QuickSort(s, d, 0, n-1);
	ll tong = 0;
	ll diem_dau = s[0], diem_cuoi = d[0];
	if (n == 1)
		tong = diem_cuoi - diem_dau;
	else
		for (int i = 1; i < n; i++) {
			if (s[i] <= diem_cuoi)
				diem_cuoi = max(diem_cuoi, d[i]);
			else {
				tong += diem_cuoi - diem_dau;
				diem_dau = s[i];
				diem_cuoi = d[i];
			}

			if (i == n-1)
				tong += diem_cuoi - diem_dau;
		}
	cout << tong;
}