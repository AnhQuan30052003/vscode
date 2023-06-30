// Code phan chia keo sao cho su chenh lech la it nhat !
#include <bits/stdc++.h>
using namespace std;

int keo[] = {0,10,20,30};
int n = sizeof(keo)/sizeof(keo[0]);
int s_keo;
int p[100][100];
int sd[100];

int tinh_s_keo()
{
    int s = 0;
    for (int i = 0; i < n; i++) s += keo[i];
    return s;
}

void bai_toan_co_so()
{
    p[0][0] = 1;
    for (int i = 1; i < max(n, s_keo); i++)
    {
        p[0][i] = 0;
        p[i][0] = 1;
    }
}

void truy_hoi()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= s_keo; j++)
            if (p[i-1][j] == 1 || p[i-1][j-keo[i]] == 1) p[i][j] = 1;
}

void truy_vet()
{
    int j;
    for (int i = s_keo/2; i > 0; i--)
        if (p[n-1][i] == 1)
        {
            j = i;
            break;
        }

    // Quet lan 1
    cout << endl;
    for (int i = n-1; i > 0; i--)
    {
        if (p[i][j] == 1 && p[i-1][j] == 0)
        {
            cout << keo[i] << ' ';
            j = j - keo[i];
            sd[i] = 1;
        }
    }

    // Quet lan 2
    cout << endl;
    int k = s_keo;
    for (int i = n-1; i > 0; i--)
    {
        if (sd[i] == 1)
        {
            k = k - keo[i];
            continue;
        }

        if (p[i][k] == 1 && p[i-1][k] == 0)
        {
            cout << keo[i] << ' ';
            k = k - keo[i];
        }
    }
}
int main()
{
    s_keo = tinh_s_keo();
    bai_toan_co_so();
    truy_hoi();
    truy_vet();
}