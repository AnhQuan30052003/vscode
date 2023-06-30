#include <iostream>
using namespace std;

void SapXepChon(int* a, int size) {
	for (int i = 0; i < size-1; i++) {
		int vt_min = i;
		for (int j = i+1; j < size; j++) {
			if (a[j] < a[vt_min])
				vt_min = j;
		}
		swap(a[i], a[vt_min]);
		for (int k = 0; k < size; k++) {
			if (k == i || k == vt_min)
				cout << "[" << a[k] << "] ";
			else
				cout << a[k] << ' ';
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	SapXepChon(a, n);
}