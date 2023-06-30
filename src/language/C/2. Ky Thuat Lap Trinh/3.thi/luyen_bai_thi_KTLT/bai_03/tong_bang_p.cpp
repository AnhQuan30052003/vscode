#include <bits/stdc++.h>
using namespace std;

int a[] = {5, 7, 10, 9, 2, 12, 15};
int n = sizeof(a)/sizeof(a[0]);
int p = 12;
int tong = 0;
int tt[50];

void kiem_tra()
{
    if (tong == p)
    {
        cout << endl;
        for (int i = 0; i < n; i++)
            if (tt[i] == 1) cout << ' ' << a[i];
    }
}

void thu(int vt)
{
    for (int i = 0; i <= 1; i++)
    {
        tt[vt] = i;
        if (i == 1) tong += a[vt];
        if (vt < n-1 && tong < p) thu(vt+1);
        else kiem_tra();
        if (i == 1) tong -= a[vt];
        tt[vt] = 0;
    }
}

int main()
{
    thu(0);
}