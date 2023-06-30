#include <iostream>
using namespace std;

using ll = long long;

int main() {
    ll a, b, v;
    cin >> a >> b >> v;

    if (a >= v) cout << 1;
    else
        if ((v-b) % (a-b) == 0)
            cout << (v-b) / (a-b);
        else
            cout << (v-b) / (a-b) + 1;
}