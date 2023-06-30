#include <iostream>
using namespace std;

int n;
int a[50];

void In() {
	for (int i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
}

void Thu(int vt) {
	if (vt == n) {
		In();
		return;
	}
	a[vt] = 4; Thu(vt+1);
	a[vt] = 7; Thu(vt+1);
}

int main() {
	cin >> n;
	Thu(0);
}