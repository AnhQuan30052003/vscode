// Cho so tu nhien n, sau do hay in ra tat ca day nhi phan co so dai bang n trong do  hai so '1' khong dung lien nhau
#include <bits/stdc++.h>

int n;
int a[100];

void kiem_tra()
{
    int dem = 0;
    for (int k = 0;  k < n-1; k++)
        if (a[k] == 1 && a[k+1] == 1) dem++;

    if (dem == 0)
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