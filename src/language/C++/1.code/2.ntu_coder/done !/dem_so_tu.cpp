// Dem so tu //
#include <iostream>
using namespace std;

int SoTu(string text) {
	int dem = 1;
	if (text[0] == '.') dem = 0;
	for (int i = 0; i < text.size()-1; i++)
		if (text[i] == '.' && text[i+1] != '.')
			++dem;
	return dem;
}

int main() {
	string text;
	getline(cin, text);
	cout << SoTu(text);
}