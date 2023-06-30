#include <iostream>
using namespace std;

int a[100], tt[100] = {0};
char c[100];

void In(int n) {
    for (int i = 1; i <= n; i++) {
        cout << c[a[i]];
    }
    cout << endl;
}

void HoanVi(int vt, int n) {
    for (int i = 1; i <= n; i++) {
        if (tt[i] != 1) {
            tt[i] = 1;
            a[vt] = i;
            if (vt < n) HoanVi(vt+1, n);
            else In(n);
            tt[i] = 0;
        }
    }
}

int main() {
    // input
    string text;
    cin >> text;
    
    // dem tu
    for (int i = 0; i < text.size()-1; i++) {
        for (int j = i+1; j < text.size(); j++)
            if (text[i] > text[j]) {
                char temp = text[i];
                text[i] = text[j];
                text[j] = temp;
            }
    }

    // dem
    int dem = 1, k = 1;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == text[i+1]) dem += 1;
        else {
            if (dem == 1) c[k++] = text[i];
            cout << text[i] << " xuat hien " << dem << " lan" << endl;
            dem = 1;
        }
    }

    // Output hoan vi
    k -= 1;
    HoanVi(1, k);
}