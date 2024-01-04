#include <iostream>
using namespace std;

void QuickSort(int a[], int left, int right) {
	if (left > right) return;
	int p = (left + right) / 2;
	int _left = left, _right = right;

	while (_left < _right) {
		while (a[_left] < a[p] && _left <= right) _left += 1;
		while (a[_right] > a[p] && _right >= left) _right -= 1;

		if (_left <= _right) {
			swap(a[_left], a[_right]);
			_left += 1;
			_right -= 1;
		}
	}

	if (_left < right) QuickSort(a, _left, right);
	if (left < _right) QuickSort(a, left, _right);
}

int main() {
	system("cls");
	int a[] = {1, 3, 2, 5, 6};
	int n = size(a);
	QuickSort(a, 0, n-1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}