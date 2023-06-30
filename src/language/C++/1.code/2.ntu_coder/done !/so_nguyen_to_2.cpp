#include <iostream>
#include <cmath>
using namespace std;

#define MAX 10000000

int a[MAX];

void SanNguyenTo() {
	for (int i = 2; i < sqrt(MAX); i++) {
		if (a[i] ==  0)
			for (int j = i*i; j < MAX; j += i)
				a[j] = 1;
	}
}

int main() {
	int n;
	cin >> n;

	int dem = 0;
	SanNguyenTo();
	for (int i = 2; i <= MAX; i++)
		if (a[i] == 0) {
			++dem;
			if (dem == n) {
				cout << i;
				break;
			}
		}
}
