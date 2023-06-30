// Code bài 1 
#include <bits/stdc++.h>
using namespace std;

int n;
int tt[50];
int dem = 0;

void kiem_tra()
{
    for (int i = 0; i < n; i++)
        if (tt[i] == 1 && tt[i+1] == 1)
        {
            dem++;
            break;
        }
}

void thu(int vt)
{
    for (int i = 0; i <= 1; i++)
    {
        tt[vt] = i;
        if (vt < n-1) thu(vt+1);
        else kiem_tra();
        tt[vt] = 0;
    }
}

int main()
{
    do { cout << "\n Nhap n = "; cin >> n; }
    while (!(n >= 2 && n <= 20));
    thu(0);
    cout << " So truong hop: " << dem;
}