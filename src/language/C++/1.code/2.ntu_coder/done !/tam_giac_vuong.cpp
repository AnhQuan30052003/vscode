// Xay dung la co tam giac vuong //
#include <iostream>
using namespace std;

int main()  {
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << (i == 1 ? "" : "\n");
	}
}