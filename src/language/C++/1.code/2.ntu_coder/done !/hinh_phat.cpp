#include <iostream>
using namespace std;

int KhoangCach(int* a, int n) {
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 1) -- vt;
		else ++vt;
	if (vt < 0) vt = -vt;
	return vt;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << KhoangCach(a, n);
}