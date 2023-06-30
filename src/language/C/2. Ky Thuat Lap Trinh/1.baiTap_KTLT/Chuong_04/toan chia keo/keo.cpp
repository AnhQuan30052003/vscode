// Lap trinh phan chia ket qua sao cho hop ly nhat 
#include <bits/stdc++.h>

int keo[50] = {1,2,3,10};

int n = 4;
int status[50];
int save_status_min[50];

int min = keo[0] + keo[1] + keo[2] + keo[3];

void ktra_min()
{
    int m;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (status[i] == 1) s1 += keo[i];
        if (status[i] == 2) s2 += keo[i];
    }

    m = abs(s1 - s2);
    if (m < min)
    {
        for (int i = 0; i < n; i++)
            save_status_min[i] = status[i];
        min = m;
    }
}

void thu(int vt)
{
    for (int i = 1; i <= 2; i++)
    {
        status[vt] = i;
        if (vt < n -1) thu(vt+1);
        else ktra_min();
    }
}

void chia_keo()
{
    printf("\n Chenh lech thap nhat cua hai dong: %d\n", min);
    printf("\n Dong 1: "); 
    for (int i = 0; i < n; i++) if (save_status_min[i] == 1) printf("%2d", keo[i]);
    printf("\n Dong 2: ");
    for (int i = 0; i < n; i++) if (save_status_min[i] == 2) printf("%2d", keo[i]);

}

int main()
{
    thu(0);
    chia_keo();
}