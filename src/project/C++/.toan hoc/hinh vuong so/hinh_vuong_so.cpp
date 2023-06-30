#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	system("cls");
	m = n*2 + 1;

	for (int dong = 0; dong < m; dong++) {
		for (int cot = 0; cot < m; cot++)
			cout << max(abs(n-dong), abs(n-cot)) << (cot == m-1 && dong < m-1 ? "\n" : " ");
	}

}