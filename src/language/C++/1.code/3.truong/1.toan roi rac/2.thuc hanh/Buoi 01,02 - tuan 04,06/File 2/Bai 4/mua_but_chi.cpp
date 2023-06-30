// Mua 4 cay chi trong ba mau
// Su dung To hop lap. Dap so: 15
#include <iostream>
using namespace std;

int main() {
    int k = 4;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = k - x - y;
            if (z >= 0) cout << x << ' ' << y << ' ' << z << endl;
        }
    }
}