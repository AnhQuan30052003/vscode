// De bai: sap xep mot mang so theo thu tu tang dan, nhung van du nguyen vi tri cua chung
#include <iostream>
using namespace std;

int a[] = {12,31,4,14,11};
const int n = sizeof(a)/sizeof(a[0]);
int cs[n];

void gan() {
    for (int i = 0; i < n; i++)
        cs[i] = i;
}

void sap_xep() {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[cs[i]] > a[cs[j]])
                swap(cs[i], cs[j]);
}

int main() {
    gan();
    sap_xep();
    for (int i = 0; i < n; i++)
        cout << a[cs[i]] << ", Vi tri: " << cs[i] << endl;
}