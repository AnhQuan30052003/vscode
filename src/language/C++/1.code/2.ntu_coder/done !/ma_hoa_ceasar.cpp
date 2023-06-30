#include <iostream>
using namespace std;

void XuLy(string& text, int k) {
	for (int i = 0; i < text.size(); i++) {
		int x = int(text[i]) - k;
		if (x >= int('a'))
			text[i] = x;
		else
			text[i] = char(122 - (97 - x - 1));
	}
}

int main() {
	string text;
	cin >> text;
	int k;
	cin >> k;

	XuLy(text, k);
	cout << text;
}