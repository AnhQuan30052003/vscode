// In day nhi phan n bit sao cho bit dau khac bit cuoi
#include <bits/stdc++.h>

int n;
int a[100];

void kiem_tra()
{
    if (a[0] != a[n-1])
    {
        for (int k = 0; k < n; k++)
            printf("%d", a[k]);
        printf("\n");
    }
}

void nhi_phan(int i)
{
    for (int k = 0; k <= 1; k++)
    {
        a[i] = k;
        if (i < n-1) nhi_phan(i+1);
        else kiem_tra();
    }
}

int main()
{
    printf("\n n = "); scanf("%d", &n);
    nhi_phan(0);
}