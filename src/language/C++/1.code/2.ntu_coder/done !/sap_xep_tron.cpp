#include <iostream> 
using namespace std;

int nb, nc;
int b[21], c[21];

void MergeSort() {
    int n = nb + nc;
    int ib = 0, ic = 0;
    for (int i = 0; i < n; i++) {
        if (ib >= nb) {
            cout << 'c' << ic+1 << ' ';
            ic++;
            continue;
        }

        if (ic >= nc) {
            cout << 'b' << ib+1 << ' ';
            ic++;
            continue;
        }

        if (b[ib] <= c[ic]) {
            cout << 'b' << ib+1 << ' ';
            ib++;
        }
        else {
            cout << 'c' << ic+1 << ' ';
            ic++;
        }
    }
}

int main() {
    cin >> nb >> nc;
    for (int i = 0; i < nb; i++) cin >> b[i];
    for (int i = 0; i < nc; i++) cin >> c[i];
    MergeSort();
}