#include <bits/stdc++.h>
using namespace std;

int ms[] = {1,2,3,5};
int n = sizeof(ms)/sizeof(ms[0]);

void tim_so()
{
    sort(ms, ms+n);
    int so;
    for (int i = 0; i < n; i++)
    {
        so = ms[i] + 1;
        if (so < ms[i+1])
        {
            cout << "\n So can tim: " << so;
            break;
        }
    }
}

int main()
{
    tim_so();
}