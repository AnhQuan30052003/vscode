#include <iostream>
using namespace std;

bool tt[10];

void In(int n) {
	for (int i = 0; i < n; i++)
		cout << tt[i];
	cout << endl;
}

void Thu(int vt, int n) {
	for (int i = 0; i <= 1; i++) {
		tt[vt] = i;
		if (vt < n-1) Thu(vt+1, n);
		else In(n);
		tt[vt] = 0;
	}
}

int main() {
	int n;
	cin >> n;
	Thu(0, n);
}